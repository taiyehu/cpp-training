#include "main.h"
using namespace std;
int main()
{
    Executor executor;
    string commands;

    cout << "Enter commands (M to move, L to turn left, R to turn right, F to accelerate, Q to quit): " << endl;
    while (true) {
        cout << "> ";
        cin >> commands;
        if (commands == "Q" || commands == "q") {
            break;
        }
        executor.executeCommands(commands);
        executor.printPosition();
    }

    return 0;
}