//
// Created by taiyehu on 2024/11/23.
//
#pragma once
class Position
{
public:
    Position(int x = 0, int y = 0) : x_(x), y_(y)
    {
    }

    void moveNorth()
    {
        ++y_;
    }
    void moveSouth()
    {
        --y_;
    }
    void moveEast()
    {
        ++x_;
    }
    void moveWest()
    {
        --x_;
    }

    int getX() const
    {
        return x_;
    }
    int getY() const
    {
        return y_;
    }

private:
    int x_, y_;
};
#ifndef CPP_TRAINING_POSITION_H
#define CPP_TRAINING_POSITION_H

#endif  // CPP_TRAINING_POSITION_H
