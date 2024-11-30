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

    void turnLeft();

    void turnRight();

    char getDirection() const;

private:
    char direction_;
};
#ifndef CPP_TRAINING_HEADING_H
#define CPP_TRAINING_HEADING_H

#endif  // CPP_TRAINING_HEADING_H
