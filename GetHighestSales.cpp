//
//  main.cpp
//  Get Highest Sales
//
//  Created by Matthew Nguyen on 5/23/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

void Display()
{
    cout << "This program calculates 4 company divisions total sales in USD \n";
    
}

double GetSales(string NameOfDivison)
{
    double sales;
    cout << "Please enter the sales for the "<< NameOfDivison <<" divison \n";
    cin >> sales;
    
    while(sales < 0 )
    {
        cout << "invalid input please enter a sales figure greater then $0 \n";
        cin >> sales;
        return sales;
    }
    return sales;
    
}

void HighestSales(double SalesSE, double SalesSW, double SalesNE, double SalesNW)
{
    if(SalesSE > SalesSW && SalesSE > SalesNE && SalesSE > SalesNW)
    {
        cout << "Southeast division has the largest sales!\n";
    }
    else if(SalesSW > SalesSE && SalesSW > SalesNE && SalesSW > SalesNW)
    {
        cout << "Southwest division has the largest sales \n";
    }
    else if(SalesNE > SalesSE && SalesNE > SalesSW && SalesNE > SalesNW)
    {
        cout << "Northeast division has the largest sales \n";
    }
    else if(SalesNW > SalesSE && SalesNW > SalesSW && SalesNW > SalesNE)
    {
        cout << "Northwest division has the largest sales \n";
    }
}


int main()
{
    Display();
    double SalesSE = GetSales("SouthEast");
    double SalesSW = GetSales("SouthWest");
    double SalesNE = GetSales("NorthEast");
    double SalesNW = GetSales("NorthWest");
    HighestSales(SalesSE, SalesSW, SalesNE, SalesNW);
    return 0;
}
