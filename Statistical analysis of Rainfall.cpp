//
//  main.cpp
//  Rain depth Per month
//
//  Created by Matthew Nguyen on 5/28/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

void IntroDisplay()
{
    cout << "This program calculates the average for rainfall per month and year. \n";
}

void GetData(double Data[], int Size, string NameOfMonth[])
{
    for(int Counter = 0 ; Counter < Size ; Counter++)
    {
        cout << "Enter the data for each month starting in: " << NameOfMonth[Counter] << endl;
        cin >> Data[Counter];
        
        while (Data[Counter] < 0 )
        {
            cout << "Please enter a valid data entry \n";
            cin >> Data[Counter];
        }
    }
}

double GetTotal(const double Data[],int Size)
{
    double total = 0;
    for (int Counter = 0 ; Counter < Size ; Counter ++)
    {
        total += Data[Counter];
    }
    return total;
}
double GetHighData(const double Data[], int Size)
{
    double TempHighData ;
    
    for (int counter = 0; counter < Size ; counter++)
    {
        if(Data[counter] > TempHighData)
        {
            TempHighData = Data[counter];
            
        }
    }
    return TempHighData;
}

double GetLowData(const double Data[], int Size)
{
    double TempLowData;
    string month;
    
    for (int counter = 0; counter < Size ; counter++)
    {
        if(Data[counter] < TempLowData)
        {
            TempLowData = Data[counter];
          
            
        }
    }
    return TempLowData;
}
void FinalDisplay(double Total, double Average, double high, double low)
{
    cout << "The total rainfall for the year was: " << Total << endl;
    cout << "The average rainfall per month was: " << Average << endl;
    cout << "Most we've seen is: " << high << endl;
    cout << "Least we've seen is: " << low << endl;
}
int main()
{
    const int Size = 11;
    double LowData , HighData, YearTotal, MonthAverage;
    double Data[Size];
    string NameOfMonth[Size] = {"Jan" , "Feb" , "Mar", "Apr" , "May", "Jun", "Jul", "Aug","Sep","Nov","Dec"};
    
    
    IntroDisplay();
    GetData(Data, Size, NameOfMonth);
    YearTotal = GetTotal(Data,Size);
    HighData = GetHighData(Data, Size);
    LowData = GetLowData(Data, Size);
    MonthAverage = YearTotal / 11;
    FinalDisplay(YearTotal,MonthAverage,HighData,LowData);
    
    
    
    return 0;
}
