//
//  main.cpp
//  Grade
//
//  Created by Matthew Nguyen on 6/13/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Grades.hpp"
using namespace std;

void FillVector(vector<Grades>& NewMyClass)
//FillVector - Fill vector with student grade information
{
    string name;
    char grade;
    int ClassSize;
    
    cout << "How many students are in the class? ";
    cin >> ClassSize;
    
    for (int i = 0 ; i < ClassSize ; i++)
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Grade: ";
        cin >> grade;
        
        Grades NewGrade(name, grade);
        NewMyClass.push_back(NewGrade);
        cout << endl;
    }
    cout << endl;
}

void PrintVector(const vector<Grades>& NewMyClass)
// PrintVecotrs - Prints the contents of vectors by calling accessor functions 
{
    unsigned int size = NewMyClass.size();
    for(unsigned int i = 0 ; i < size; i++)
    {
        cout << "Student Name: " << NewMyClass[i].GetName() << endl;
        cout << "Student Grade: " << NewMyClass[i].GetGrade() << endl;
        cout << endl;
    }
}

int main()
{
    
    vector<Grades> MyClass;
    
    FillVector(MyClass);
    PrintVector(MyClass);
    
    
    return 0;
}
