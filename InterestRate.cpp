//
//  main.cpp
//  PresentValue
//
//  Created by Matthew Nguyen on 5/24/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void intro()
{
    cout << "Hello this program calculates the amount of present value that is needed for future value in the bank\n";
}
double GetFutureValue()
{   double value;
    cout << "please enter a desired future value that you would like to have from bank interest rates \n";
    cin >> value;
    return value;
}

double GetAnnualRate()
{
    double value;
    cout << "please enter an annual interst rate to apply \n";
    cin >> value;
    return value;
}

double GetYears()
{
    double years;
    cout << "please enter the amount of years you are willing to wait for the interst to incur \n";
    cin >> years;
    return years;
}
double Calculate(double FutureValues, double AnnualRate, double Years)
{
    double PresentValue = FutureValues/(pow((1+AnnualRate),Years));
    return PresentValue;
}

void display(double PresentValue)
{
    cout << "the amount you need to deposit is: "<<PresentValue<<" dollars\n";
}
int main()
{
    intro();
    double FutureValue = GetFutureValue();
    double AnnualRate = GetAnnualRate();
    double Years = GetYears();
    double PresentValue = Calculate(FutureValue, AnnualRate, Years);
    display(PresentValue);
    
    return 0;
}
