//
// Created by taiyehu on 2024/11/23.
//
#pragma once
class Heading
{
public:
    Heading(char direction = 'N') : direction_(direction)
    {
    }

    void turnLeft()
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

    void turnRight()
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

    char getDirection() const
    {
        return direction_;
    }

private:
    char direction_;
};
#ifndef CPP_TRAINING_HEADING_H
#define CPP_TRAINING_HEADING_H

#endif  // CPP_TRAINING_HEADING_H
