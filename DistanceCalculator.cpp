//
//  main.cpp
//  FallingDistance
//
//  Created by Matthew Nguyen on 5/24/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;
const double g = 9.8;

double FallingDistance(double time)
{
    double CalculatedDistance = static_cast<double>((.5*g*(time*time)));
    return CalculatedDistance;
}
int main()
{
    cout << "Here are the calculated distances from when the time is 0-10\n" ;
    for (double i =0 ; i<10; i++)
    {
        double Distance = FallingDistance(i);
        cout << Distance << endl;
    }
    return 0;
}
