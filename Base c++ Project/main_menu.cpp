#include <iostream>
#include <string>
#include "globalvars.h"
#include "functions.h"
using namespace std;

//main menu function
int main_menu(int b)
{

    while (b == 0)
    {
        //prompt
        cout << "Would you like to start the game? [Yes or No]" << endl;
        cin >> a;
        if (a == "Yes")
        {
            //true state
            b = 1;
        }
        else if (a == "No")
        {
            //neutral state
            b = 0;
        }
        else if (a == "-terminate")
        {
            //terminates program
            terminate();
        }
        else if (a == "-developertest")
        {
            /*
            if (condition)
           {
                 code 
           }
            f (condition )
            {
                code 
           }
           if (condition)
           {
                code
            }
            */
        }
        else
        {
            //neutral state- sends to beggining
            cout << "Sorry! Invalid Input." << endl;
            b = 0;
        }
        //Game Start-Up
        if (b == 1)
        {
            cout << "Sorry but the game doesn't exist right now!" << endl;
            cout << "Would you like to end the game? [Yes or No]" << endl;
            cin >> a;
            if (a == "Yes")
            {
                cout << "Okay" << endl;
                terminate();
            }
            //fix this if statement giving an error
            else if (a == "No")
            {
                cout << "Okay" << endl;
                b = 0;
            }
            if (a == "-terminate")
            {
                cout << "Terminting program." << endl;
                terminate();
            }
        }
    }
    return 0;
}
