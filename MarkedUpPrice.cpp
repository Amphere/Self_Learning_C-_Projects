//
//  main.cpp
//  Rock Paper Scissor Game
//
//  Created by Matthew Nguyen on 5/22/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//
//This program is for anyone to evaluate and enjoy for their self learning 

#include <iostream>
using namespace std;

void Display()
{
    cout << "Hello, this program displays the calculated mark up percentages\n";
    cout << "of 100% and 50% whole sale items\n";
    
}

int GetChoice()
{
    int choice;
    
        cout << "please enter a mark up choice to calculate: \n";
        cout << "Option 1 : 100% || Option 2 : 50% \n";
        cin >> choice;
    
    while (choice < 1 || choice > 2)
    {
        cout << "Please enter a valid choice \n";
        cin >> choice;
    }
    
    return choice;
}

double CalculateRetailPrice(int Choice)
{
    if (Choice == 1)
    {
        double MarkedUpPrice;
        cout << "please enter a price to mark up by 100%\n";
        cin >> MarkedUpPrice;
        MarkedUpPrice = MarkedUpPrice * 2;
        return MarkedUpPrice;
    }
    else if(Choice == 2)
    {
        double MarkedUpPrice;
        cout << "please enter a price to mark up by 50%\n";
        cin >> MarkedUpPrice;
        MarkedUpPrice = MarkedUpPrice * 1.5;
        return MarkedUpPrice;
    }
    return 0;
}

void DisplayFinal(double MarkedUpPrice)
{
    cout << "$" << MarkedUpPrice << " is the marked up price." << endl;
}

int main()
{
    Display();
    int Choice = GetChoice();
    double MarkedUpPrice = CalculateRetailPrice(Choice);
    DisplayFinal(MarkedUpPrice);
    
    return 0;
}
