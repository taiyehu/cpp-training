//
// Created by taiyehu on 2024/11/30.
//
#include "main.h"
void Heading::turnLeft()
{
    switch (direction_) {
    case 'N':
        direction_ = 'W';
        break;
    case 'W':
        direction_ = 'S';
        break;
    case 'S':
        direction_ = 'E';
        break;
    case 'E':
        direction_ = 'N';
        break;
    }
}

void Heading::turnRight()
{
    switch (direction_) {
    case 'N':
        direction_ = 'E';
        break;
    case 'E':
        direction_ = 'S';
        break;
    case 'S':
        direction_ = 'W';
        break;
    case 'W':
        direction_ = 'N';
        break;
    }
}

char Heading::getDirection() const
{
    return direction_;
}