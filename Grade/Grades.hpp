//  header file
//  Grades.hpp
//  Grade
//
//  Created by Matthew Nguyen on 6/13/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#ifndef Grades_hpp
#define Grades_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Grades
{
private:
    //Member variables
    string NewName;
    char NewGrades;
    
public:
    //Default constructor
    Grades();
    
    //Overloaded constructor
    Grades(string, char);
    
    //Accessor Function
    string GetName()const;
        //GetName - Returns name of the student
    char GetGrade()const;
        //GetGrade - Returns letter grade of the student
    
    //Mutator
    void SetName(string);
        //SetName - Returns name of student
    void SetGrade(char);
        //SetGrades - Returns letter grade of student
    
    //Destructor
    ~Grades();
};

#endif /* Grades_hpp */
