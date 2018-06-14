//
//  Grades.cpp
//  Grade
//
//  Created by Matthew Nguyen on 6/13/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include "Grades.hpp"

Grades :: Grades()
{
    NewGrades = ' ' ;
}

Grades :: Grades(string name, char grade)
{
    NewName = name ;
    NewGrades = grade;
}

string Grades :: GetName()const
{
    return NewName;
}

char Grades :: GetGrade()const
{
    return NewGrades;
}

void Grades :: SetName(string name)
{
    NewName = name;
}

void Grades :: SetGrade(char Grade)
{
    NewGrades = Grade;
}

Grades :: ~Grades()
{
    
}
