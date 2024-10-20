// Ch4ProgrammingProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Geometry Calculator
    1. Calculate the Area of a Circle
    2. Calculate the Area of a Rectangle
    3. Calculate the Area of a Triangle
    4. Quit
    Enter your choice (1�4):
If the user enters 1, the program should ask for the radius of the circle then 
display its area. Use the following formula:  area = (pi)r2. 
Use 3.14159 for 3.14159pi and the radius of the circle for r. 
If the user enters 2, the program should ask for the length and width of the rectangle, then display the rectangle�s area. 
Use the following formula: area = length * width.  
If the user enters 3, the program should ask for the length of the triangle�s base and its height, then display its area. 
Use the following formula: area = base * height * .5. If the user enters 4, the program should end.
Input Validation: Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu. Do not accept negative values for the circle�s radius, the rectangle�s length or width, or the triangle�s base or height.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Welcome to the Geometry Calculator. Please choose from one of the following: " << endl;
    cout << "1. Calculate a Circle's area\n2. Calculating a Rectangle's area\n3. Calculating a Triangle's area\n4. Quit" << endl;
    string choice;
    float area, radius, length, width, base, height;

    cin >> choice;

        if(choice)
    
    return 0;
}