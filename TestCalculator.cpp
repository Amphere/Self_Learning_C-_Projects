//
//  main.cpp
//  Sorting Test Scores
//
//  Created by Matthew Nguyen on 6/3/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//
//  This program takes accepts number of test, and its scores per test, to calculate the average and sort them from highest to lowest. 

#include <iostream>
using namespace std;

//Sort array from highest to lowet
void SortTestScores(double TestScores[], int NumTestScores)
{
    bool swap;
    int temp;
    
    do
    {
        swap = false;
        for (int count =0; count < (NumTestScores - 1) ; count ++)
        {
            if (TestScores[count] < TestScores[count+1])
            {
                temp = TestScores[count];
                TestScores[count] = TestScores[count +1];
                TestScores[count +1] =temp;
                swap = true;
                
            }
        }
    }
    while(swap);
    cout << "Here are the test scores from Highest to Lowest. \n";
    for (int count = 0 ; count < NumTestScores ; count ++ )
    {
        cout << TestScores[count] << endl;
    }
}
//Totals all the scores together in one integer
double GetTotalScore(const double TestScores[], int NumTestScores)
{
    double total =0;
    for (int count = 0 ; count < NumTestScores ; count ++ )
    {
        total += TestScores[count];
    }
    return total;
}
//Averages the total of all the scores while dropping the lowest
double GetAverageScore(double Total, double LowScore, int NumTestScores)
{
    double Average;
    Average = (Total - LowScore)/(NumTestScores-1);
    return Average;
}
//retrives the lowet input from user
double GetLowScore(const double TestScores[], int NumTestScores)
{
    
    double LowScore = TestScores[0];
    
    for (int count = 0 ; count < NumTestScores ; count ++ )
    {
        if (TestScores[count] < LowScore)
            LowScore = TestScores[count];
        
    }
    return LowScore;
}
//final display
void DisplayFinal(double LowScore, double Average)
{
    cout << "Here is the lowest of the scores entered " << LowScore << endl;
    cout << "Here is the average with the lowest score dropped: " << Average << endl;
}
int main()
{
    double *TestScores = nullptr , LowScore, Total, Average;
    int NumTestScores;
    
    
    
    cout <<  "Please enter the number of test scores you'd like to enter \n";
    cin >> NumTestScores;
    
    TestScores = new double[NumTestScores]; // pointer to allocate memory
    
    for (int count = 0 ; count < NumTestScores; count ++)
    {
        cout << "Enter test score " << count +1 << endl;
        cin >> TestScores[count];
    }
    
    SortTestScores(TestScores,NumTestScores);
    Total = GetTotalScore (TestScores, NumTestScores);
    LowScore = GetLowScore(TestScores , NumTestScores);
    Average = GetAverageScore(Total, LowScore, NumTestScores);
    DisplayFinal(LowScore, Average);
    delete [] TestScores;
    TestScores = nullptr;

    return 0;
}
