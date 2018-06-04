//
//  main.cpp
//  Dynamic Allocating Memory
//
//  Created by Matthew Nguyen on 6/2/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//
//  This program simply demonstrates the programmers ability to write code to allocate memory.

#include <iostream>
using namespace std;
int main()
{
    double *Sales = nullptr , total;
    int NumDays;
    total = 0 ;
    
    cout << "How many days of sales figures do you wish to calculate? \n";
    cin >> NumDays ; // number of sales days
    Sales = new double[NumDays]; // assign sales to point to array that holds NumDays
    cout <<  "Enter Sales Figure ";
    for ( int counter =0; counter < NumDays; counter ++ ) // enter sales data
    {
        cout <<  "Day " << counter + 1 << ": ";
        cin >> Sales[counter];
    }
    // calculate total sales
    for ( int counter = 0 ; counter < NumDays ; counter ++ ) // total sales
    {
        total += Sales[counter]; // display sales
    }
    cout << endl << "Total sales: $" << total << endl;
    delete []Sales;
    Sales = nullptr;
    return 0;
}
