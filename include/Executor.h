//
// Created by taiyehu on 2024/11/23.
//
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

    void executeCommand(char command)
    {
        switch (command) {
        case 'M':
            moveForward();
            break;
        case 'L':
            heading_.turnLeft();
            break;
        case 'R':
            heading_.turnRight();
            break;
        default:
            break;
        }
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
