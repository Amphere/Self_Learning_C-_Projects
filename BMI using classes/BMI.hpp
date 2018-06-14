//
//  BMI.hpp
//  BMI using classes
//
//  Created by Matthew Nguyen on 6/12/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//  Header ==> Declarations

#ifndef BMI_hpp
#define BMI_hpp
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class BMI
{
private:
    //Member Variables
    string NewName;
    double NewHeight, NewWeight;
    
public:
    //Default Constructor sets member variable to null state
    BMI();
    
    //Overload contructor
    BMI(string, double, double);
    
    //Destructor
    ~BMI();
    
    //Accessor Functions
    string GetName()const;
        // GetName - Returns the name of patient.
    int GetHeight()const;
        // GetHeight - Returns height of patient.
    double GetWeight() const;
        // GetWeight - Returns height of patient.
    double CalculateBMI()const;
        // calculateBMI - Calculate BMI of patient.
        //@ return double - BMI of patient.
    // Mutator Functions
    void setName(string);
        // SetName - Sets name of patient
    void setHeight(double);
        // SetHeight - Sets height of patient
    void setWeight(double);
        // setWeight - Sets weight for patient
    
};

#endif /* BMI_hpp */
