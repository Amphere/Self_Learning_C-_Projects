//
//  main.cpp
//  Simple Pointer notation for Array exercise
//
//  Created by Matthew Nguyen on 5/31/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//
// These are simple Pointer exercises for anyone who is just becoming introduced to pointers.
#include <iostream>
using namespace std;
int main()
{
    int Size = 5;
    int Numbers[Size];
    cout << "Please enter " << Size << " numbers\n";
    for ( int index = 0 ; index < Size ; index ++ )
    {
        cin >> *(Numbers + index);
    }
    cout << "Here is what is inside \n";
     for ( int index = 0 ; index < Size ; index ++ )
     {
         cout << *(Numbers + index) << endl;
     }
    //***************************************************************************************************************
    //Reversing an array 
    const int SIZE = 8;
    int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *ptr = nullptr;
    int counter; // loop interator
    ptr = set; // assign address
    
    cout << "Here are the contents of the array: \n";
    for ( counter = 0 ; counter < SIZE; counter ++ )
    {
        cout << *ptr << endl;
        ptr++;
    }
    cout << " Here are the contents in reverse order: \n";
    for ( counter = 0 ; counter < SIZE; counter ++ )
    {
        cout << *ptr << endl ;
        ptr--;
    }
    
    return 0;
}
