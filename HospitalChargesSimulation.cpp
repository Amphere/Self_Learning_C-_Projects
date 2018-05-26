//
//  main.cpp
//  Hospital Charges
//
//  Created by Matthew Nguyen on 5/25/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

const double MedicalRate = 12.4;
const double DailyRate = 30.4;
const double ServiceCharges = 40;

int ProgramInitiation()
{
    int answer;
    cout << "This program calculates the total charges for a patient that is either \n";
    cout << "an inpatient or an out patient \n";
    cout << "Are you an 1. inpatient or an 2. out patient? \n";
    cin >> answer;
    if (answer == 1)
    {
        return answer;
    }
    else
    {
        return answer;
    }
}
double NumberOfDays()
{
    double days;
    cout << "How many days were you in the hospital?\n";
    cin >> days;
    return days;
}

double TotalCharges(double type, double days, double medical, double rate, double services)
{
    double total;
    if (type ==1)
    {
        total = days * rate + medical + services;
        return total;
    }
    else
    
        total = days * rate +medical;
        return total;
    
}

int main()
{
    double type = ProgramInitiation();
    double days = NumberOfDays();
    
    double total = TotalCharges(type, days, MedicalRate,DailyRate,ServiceCharges);
    cout << "your total charges are : "<< total << endl << "Thank you ";
    
    
 
    return 0;
}
