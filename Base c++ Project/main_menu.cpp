#include <iostream>
#include <string>
#include "golbalv.h"
using namespace std;

//main menu function
int main_menu()
{
    while (b == 0)
    {
        //prompt
        cout << "Would you like to start the game? [Yes or No]" << endl;
        cin >> a;
        if (a == "Yes")
        {
            //true state- sends to for loop
            b = 1;
            break;
        }
        else if (a == "No")
        {
            //neutral state- sends to beggining
            b = 0;
        }
        else if (a == "-terminate")
        {
            //terminates program
            terminate();
        }
        else
        {
            //neutral state- sends to beggining
            b = 0;
        }
    }

    //Main Menu w/ basic option commands
    while (b == 1)
    {
        cout << "Sorry but the game doesn't exist right now! Returning to main menu." << endl;
        while (b == 1)
        {
            cout << "Would you like to end the game? [Yes or No]" << endl;
            cin >> a;
            if (a == "Yes")
            {
                cout << "Okay" << endl;
                terminate();
            }
            else if (a == "No")
            {
                
                b = 1;
                break;
            }
            if (a == "-terminate")
            {
                cout << "Terminting program." << endl;
                terminate();
            }
        }
        b = 0;
        break;
    }
}