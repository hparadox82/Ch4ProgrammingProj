// Ch4ProgrammingProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*shipping project:
* 
* RATES PER 500mi:
<=2kg $1.10
>2kg, <=6kg = $2.20
>6kg <=10kg = $3.70
>10kg <=20kg = $4.80
need to calculate per 500mi, so need to 

ask for weight+distance, calc total*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight, Dis, cost, rate;
    cout << "Please input your package weight in kg and how far away you wish to send it in miles.\nMAX WEIGHT: 20kg\nMIN DISTANCE: 10mi\nMAX DISTANCE: 3000mi" << endl;
        cout << "WEIGHT:" << endl;
        cin >> weight;
            cout << "DISTANCE:" << endl;
            cin >> Dis;

    if (weight > 0 && weight <= 2)
    {
        rate = 1.10;
    }
        else if (weight > 2 && weight <= 6)
        {
            rate = 2.20;
        }
            else if (weight > 6 && weight <= 10)
            {
                rate = 3.70;
            }
                else if (weight > 10 && weight <= 20)
                {
                    rate = 4.80;
                }
                    else
                    {
                        cout << "ERROR: Weight cannot be zero or exceed 20kg." << endl;
                    }
    if (Dis < 10 || Dis > 3000)
    {
        cout << "ERROR: Your distance has not met the minimum or maximum." << endl;
    }
        else
        {
            cost = rate * ((Dis ) / 500.0);
            cout << "Your shipping charge is estimated to be: " << setprecision(3) <<  cost << endl;
        }
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
