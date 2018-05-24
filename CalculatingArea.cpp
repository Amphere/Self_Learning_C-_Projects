//
//  main.cpp
//  Rectangle Area
//
//  Created by Matthew Nguyen on 5/23/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

void Display()
{
    cout << "This program calculates the length and width input from the user, then calculates the area\n";
    
}
double GetLength()
{
    double LengthInput;
    cout << "Please enter the length of the rectangle\n";
    cin >> LengthInput;
    
    while (LengthInput < 0)
    {
        cout << "invalid input, please enter a length\n";
        cin >> LengthInput;
        return LengthInput;
    }
    return LengthInput;
}
double GetWidth()
{
    double WidthInput;
    cout << "Please enter the Width of the rectangle\n";
    cin >> WidthInput;
    
    while(WidthInput < 0)
    {
        cout << "invalid input, please enter a width\n";
        cin >> WidthInput;
        return WidthInput;
    }
        
    return WidthInput;
}
double GetArea(double Length , double Width)
{
    double area = Length * Width ;
    return area;
}

void DisplayData(double Area)
{
    cout << "This is the area " << Area << endl;
}

int main()
{
    Display();
    double Length = GetLength();
    double Width = GetWidth();
    double Area = GetArea(Length, Width);
    DisplayData(Area);
    
    return 0;
}
