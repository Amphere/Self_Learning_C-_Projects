//
//  main.cpp
//  Larger Than N
//
//  Created by Matthew Nguyen on 5/28/18.
//  Copyright © 2018 Matthew Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

void DisplayLargerThanN(int array[],int size,int N)
{
    for (int i = 0 ; i < size ; i ++ )
    {
        if(array[i] > 25)
        {
            cout << array[i];
        }
    }
}

int main()
{
    const int size = 5 ;
    int array[size] = {10,20,30,40,50};
    int N = 25;
    DisplayLargerThanN(array, size, N);
    
    return 0;
}
