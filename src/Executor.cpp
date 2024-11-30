//
// Created by taiyehu on 2024/11/23.
//
#include <memory>
#include <string>
#include <iostream>
#include "main.h"

void Executor::executeCommands(const std::string& commands)
{
    for (char command : commands) {
        executeCommand(command);
    }
}

void Executor::getPosition(int& x, int& y, char& heading) const
{
    x = position_.getX();
    y = position_.getY();
    heading = heading_.getDirection();
}

void Executor::printPosition() const
{
    int x, y;
    char heading;
    getPosition(x, y, heading);
    std::cout << "Current Position: (" << x << ", " << y << ") Heading: " << heading << std::endl;
}

void Executor::turnLeftCommand(){
    if(acc) moveForward();
    heading_.turnLeft();
}

void Executor::turnRightCommand(){
    if(acc) moveForward();
    heading_.turnRight();
}

void Executor::moveForwardCommand(){
    if(acc) moveForward();
    moveForward();
}
void Executor::executeCommand(char command)
{
    if(command == 'M') {
        std::unique_ptr<MoveForwardCommand> cmder = std::make_unique<MoveForwardCommand>();
        cmder->DoOperate(*this);
    }
    if(command == 'L') {
        std::unique_ptr<TurnLeftCommand> cmder = std::make_unique<TurnLeftCommand>();
        cmder->DoOperate(*this);
    }
    if(command == 'R') {
        std::unique_ptr<TurnRightCommand> cmder = std::make_unique<TurnRightCommand>();
        cmder->DoOperate(*this);
    }
    if(command == 'F') acc = !acc;
}
void Executor::moveForward()
{
    switch (heading_.getDirection()) {
    case 'N':
        position_.moveNorth();
        break;
    case 'S':
        position_.moveSouth();
        break;
    case 'E':
        position_.moveEast();
        break;
    case 'W':
        position_.moveWest();
        break;
    }
}
#ifndef CPP_TRAINING_EXECUTOR_H
#define CPP_TRAINING_EXECUTOR_H

#endif  // CPP_TRAINING_EXECUTOR_H
