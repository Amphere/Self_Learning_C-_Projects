//
//  main.cpp
//  Rock Paper Scissor
//
//  Created by Matthew Nguyen on 5/25/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GameDisplay()
{
    int UserChoice;
    cout << "This is a game of Rock, Paper, Scissors \n";
    cout << "From the list please enter your choice \n";
    cout << "1. Rock " << endl << "2. Paper" << endl << "3. Scissors" << endl;
    cin >> UserChoice;
    return UserChoice;
}
int ComputerGuess()
{
    srand((unsigned)time(0));
    int guess = rand()%(3-1)+1;
    return guess;
}

void CalculateWinner(int UserInput, int ComputerInput)
{
    if (UserInput == 1 && ComputerInput == 2)
    {
        cout << "You've choosen Rock \n" << "I've choosen Paper, You've LOST!\n";
    }
    else if(UserInput == 1 && ComputerInput == 3)
    {
        cout << "You've choosen Rock \n" << "I've choosen Scissors, You've WON!\n";
    }
    else if(UserInput == 2 && ComputerInput == 1)
    {
       cout << "You've choosen Paper \n" << "I've choosen Rock, You've Won!\n";
    }
    else if(UserInput == 2 && ComputerInput == 3)
    {
        cout << "You've choosen Paper \n" << "I've choosen Scissor, You've LOST!\n";
    }
    else if(UserInput == 3 && ComputerInput == 1)
    {
        cout << "You've choosen Scissor \n" << "I've choosen Rock, You've LOST!\n";
    }
    else if(UserInput == 3 && ComputerInput == 2)
    {
        cout << "You've choosen Scissor \n" << "I've choosen Paper, You've Won!\n";
    }
    else if(UserInput == ComputerInput)
    {
        cout << "looks like its a draw cause I chose the same option \n";
    }
       
}

int main()
{
    int UserChoice = GameDisplay();
    int cGuess = ComputerGuess();
    CalculateWinner(UserChoice, cGuess);
    
    
   
}
