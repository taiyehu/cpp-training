//
// Created by taiyehu on 2024/11/23.
//
#pragma once
#include <memory>
class Executor
{
public:
    Executor(int x = 0, int y = 0, char heading = 'N') : position_(x, y), heading_(heading)
    {
    }

    void executeCommands(const std::string& commands)
    {
        for (char command : commands) {
            executeCommand(toupper(command));
        }
    }

    void getPosition(int& x, int& y, char& heading) const
    {
        x = position_.getX();
        y = position_.getY();
        heading = heading_.getDirection();
    }

    void printPosition() const
    {
        int x, y;
        char heading;
        getPosition(x, y, heading);
        std::cout << "Current Position: (" << x << ", " << y << ") Heading: " << heading << std::endl;
    }

private:
    Position position_;
    Heading heading_;
    bool acc = false;

    void turnLeftCommand(){
        if(acc) moveForward();
        heading_.turnLeft();
    }

    void turnRightCommand(){
        if(acc) moveForward();
        heading_.turnRight();
    }

    void moveForwardCommand(){
        if(acc) moveForward();
        moveForward();
    }

    class MoveForwardCommand{
    public:
        void DoOperate(Executor &executor){
            executor.moveForwardCommand();
        }
    };

    class TurnLeftCommand{
    public:
        void DoOperate(Executor &executor){
            executor.turnLeftCommand();
        }
    };

    class TurnRightCommand{
    public:
        void DoOperate(Executor &executor){
            executor.turnRightCommand();
        }
    };

    void executeCommand(char command)
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

    void moveForward()
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
};
#ifndef CPP_TRAINING_EXECUTOR_H
#define CPP_TRAINING_EXECUTOR_H

#endif  // CPP_TRAINING_EXECUTOR_H
