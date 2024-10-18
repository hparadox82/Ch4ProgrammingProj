// Ch4ProgrammingProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*define which months have 30 and 31 days, as well as feb having 28
prompt user to enter month in integer 1-12
calculate if leap yr (bool? something)
cin month number, invalidate/return to menu if any other number than 1-12 are entered
cin year
if monthsw30days, display 30 days. if monthsw31days, display 31. 
feb is its own at 28, 29 if leap yr (if year%100 or 4 == 0, display its a leap yr)
*/

#include <iostream>
using namespace std;

bool isLeap(int year)
{
    if (year % 100 == 0)
    {
        return year % 400 == 0;
    }
    return year % 4 == 0;
}

int main()

{
    int year, month;

    cout << "Please enter the month you want as any number 1-12." << endl;
    cin >> month;
    cout << "Please enter a year." << endl;
    cin >> year;
    if (month == 0 || month > 12)
    {
        cout << "Invalid month number.";
        return 1;
    }

    int daisyn;
    switch (month)
    {case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        daisyn = 31;
        break;
    case 4: case 6: case 9: case 11:
        daisyn = 30;
        break;
    case 2:
        if (isLeap(year))
        {
            daisyn = 29;
        }
        else
        {
            daisyn = 28;
        }
        break;
    }
    cout << "Month: " << month << '\n' << "Number of days: " << daisyn << '\n' << "Year: " << year << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
