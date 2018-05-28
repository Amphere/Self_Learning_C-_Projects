//
//  main.cpp
//  Averaging Test Scores
//
//  Created by Matthew Nguyen on 5/28/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

void GetTestScore(double Array[], int Size)
{
    for ( int i = 0 ; i < Size ; i ++)
    {
        cout << "Please enter 5 test scores. \n" << "Test score " << (i+1) << ": \n";
        cin >> Array[i];
    }
}
double TotalTestScore(double Array[], int Size)
{
    double total = 0;
    for( int i = 0 ; i < Size ; i ++ )
    {
        total += Array[i];
    }
    return total;
}
double GetLowScore(const double Array[], int Size )
{
    double lowest;
    for( int counter= 0 ; counter < Size ; counter ++ )
    {
        if ( Array[counter] < lowest )
        {
            lowest = Array[counter];
        }
    }
    return lowest;
}
void Display(double Average)
{
    cout << "The Average score is " << Average << " while the lowest score has been dropped ";
}
int main()
{
    
    const int Size = 5;
    
    double Array[Size] , total, LowScore;
    
    GetTestScore(Array, Size);
    
    total = TotalTestScore(Array, Size);
    
    LowScore = GetLowScore(Array, Size);
    
    double Average = (total - LowScore)/4;
    
    Display(Average);
    
    return 0;
}
