/*Create a menu as follows (do no use loops, the program runs one time):

        MAIN MENU

1-Letter grade using if
2-Letter grade using switch
3-Exit

In options 1 and 2, prompt the user for a number and if the number is between 0 and 100 call the appropriate function; otherwise, display a message that the number is out of range.*/

//write include statements
#include<decisions.h>
#include<decisions.cpp>
#include<iostream>

using std::cout;
using std::cin;

int main() 

{
        int value;

        cout << "Please select one of the options :" ;
        cin >> value;

        if (value == 1)
        {
                int num;
                cout << "Enter the number grade, 0 - 100: " ;
                cin >> num;
                get_letter_grade_using_if(num);
        }
        else if (value == 2)
        {
                int num;
                cout << "Enter the number: " ;
                cin >> num;

                get_letter_grade_using_switch(num);

        }
        else
        {
                cout << "Error." ;
        }
        return 0;
}
