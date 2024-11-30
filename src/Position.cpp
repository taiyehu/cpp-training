//
// Created by taiyehu on 2024/11/30.
//
#include "main.h"
void Position::moveNorth()
{
    ++y_;
}
void Position::moveSouth()
{
    --y_;
}
void Position::moveEast()
{
    ++x_;
}
void Position::moveWest()
{
    --x_;
}

int Position::getX() const
{
    return x_;
}
int Position::getY() const
{
    return y_;
}