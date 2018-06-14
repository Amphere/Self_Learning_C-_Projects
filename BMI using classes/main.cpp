//
//  main.cpp
//  BMI using classes
//
//  Created by Matthew Nguyen on 6/12/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
#include <string>
#include "BMI.hpp"
using namespace std;

int main()
{
    string name;
    double Height, Weight;
    
    cout << "Enter your name ";
    cin >> name;
    cout << "Enter your height in inches ";
    cin >> Height;
    cout << "Enter your weight in pounds ";
    cin >> Weight;
    
    //BMI Student_1(name, Height, Weight); // using overloaded constructor
    
    //cout << endl << "Patient Name: " << Student_1.GetName() << endl << "Height: " << Student_1.GetHeight() << endl << "Weight: " << Student_1.GetWeight() << endl;
    
    BMI Student_2;
    Student_2.setName(name);
    Student_2.setHeight(Height);
    Student_2.setWeight(Weight);
    
    cout << endl << "Patient Name: " << Student_2.GetName() << endl << "Height: " << Student_2.GetHeight() << endl << "Weight: " << Student_2.GetWeight() << endl << "BMI: " << Student_2.CalculateBMI() << endl;
    
    return 0;
}
