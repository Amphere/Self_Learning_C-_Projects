//
//  main.cpp
//  Simple Array Practice
//
//  Created by Matthew Nguyen on 5/28/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{

    int numbers[5];
    for(int &val : numbers)
    {
        cout << "please enter 5 numbers ";
        cin >> val;
    }
    cout << "here are the values you entered: \n";
    for (int val : numbers)
    {
        cout << val << endl;
    }
    
    return 0;
}
