//
//  BMI.cpp
//  BMI using classes
//
//  Created by Matthew Nguyen on 6/12/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include "BMI.hpp"
BMI :: BMI() //default
{
    NewHeight = 0.0;
    NewWeight = 0.0;
}

BMI :: BMI(string name, double height, double weight) //parameter
{
    NewName = name ;
    NewHeight = height;
    NewWeight = weight;
}

string BMI :: GetName()const
{
    return NewName;
}

int BMI :: GetHeight()const
{
    return NewHeight;
}

double BMI:: GetWeight()const
{
    return NewWeight;
}

double BMI :: CalculateBMI()const
{
    return ((NewWeight * 703 / (NewHeight*NewHeight)));
}

void BMI :: setName(string name)
{
    NewName = name;
}

void BMI :: setHeight(double height)
{
    NewHeight = height;
}

void BMI :: setWeight(double weight)
{
    NewWeight = weight;
}

BMI :: ~BMI()
{
    
}
