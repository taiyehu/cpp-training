//
// Created by taiyehu on 2024/11/23.
//
#pragma once
class Executor
{
public:
    Executor(int x = 0, int y = 0, char heading = 'N') : position_(x, y), heading_(heading)
    {
    }

    void executeCommands(const std::string& commands);

    void getPosition(int& x, int& y, char& heading) const;

    void printPosition() const;

private:
    Position position_;
    Heading heading_;
    bool acc = false;

    void turnLeftCommand();

    void turnRightCommand();

    void moveForwardCommand();

    class MoveForwardCommand{
    public:
        void DoOperate(Executor &executor)
        {
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
        };
    };

    void executeCommand(char command);

    void moveForward();
};
#ifndef CPP_TRAINING_EXECUTOR_H
#define CPP_TRAINING_EXECUTOR_H

#endif  // CPP_TRAINING_EXECUTOR_H
