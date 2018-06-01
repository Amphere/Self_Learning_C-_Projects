//
//  main.cpp
//  Using 2D array
//
//  Created by Matthew Nguyen on 5/29/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

void GetData(double data)
{
    double MonkeyDiet;
    cout << " please enter data for monkey diet \n";
    cin >> MonkeyDiet;
    
}

int main()
{
    int total = 0;
    int Monkey = 3;
    int Day = 5;
 
    double TwoDim[Monkey][Day];
    for ( int index = 0; index < Day; index ++)
    {
        for (int search = 0; search < Monkey ; search ++)
        {
            cout <<  "Please enter data for Monkey diet for monkey: " << search + 1 << endl << "And for day: " << index +1 << endl;
            cin >> TwoDim[search][index];
            total += TwoDim[search][index];
            
        }
    }
    cout << total;

     return 0;
}



