#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 2) {
        string argv1 = argv[1];
        if (argv1 == "help") {
            cout << "------------------ Help message -----------------\n" 
                 << "outline: Display outline of cora programs.\n";
        }
        else if (argv1 == "outline") {
            cout << "----------------- Outline -----------------\n"
                 << setw(20) << left << "Journal:" << "fill" <<  endl
                 << setw(20) << left << "Workout tracker:" << "fill" << endl
                 << setw(20) << left << "Task manager:" << "fill" << endl;
        }
    }
    else if (argc == 1) {
        cout << "------------------ Cora Start Menu -----------------\n"
             << "Here will be the programs cora runs.\n";
    }
    else {
        cout << "Error: arguments\n";
    }
    return 0;
}
