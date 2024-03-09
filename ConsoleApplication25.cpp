// ConsoleApplication25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
//declaration
int const NUM = 20;
/*
Define an array with a maximum of 20 integer values and fill the array with
numbers of your own choosing as intializers. Then write, compile, and run a C++ program
that reads the numbers in the array and places all zero and positive numbers in an array
named positive and all negative numbers in an array named negative. Finally, have your
program display the values in both the positive and negative arrays.

*/
int main()
{
    //declaration
    int numbers[NUM] = { 20, -8, 66, 0, 45, -1, 50, -59, -23, 11, 9, -77, 100, -99, -20,-45,-33, 98, 79, -2 };
    int positive[NUM] = {};
    int negative[NUM] = {};
    int posIndex=0 ;
    int negIndex=0 ;
    int j = 0, m = 0;
    //for-loop+
    for (int i = 0;i < NUM;i++)
    {
        //cout << numbers[i] << " " << endl;
        //introduction of if-else
        if (numbers[i] >= 0 )
        {
            positive[j] = numbers[i];
            posIndex++;
            j++;
        }
    }
    for (int i = 0;i < NUM;i++)
    {
        if (numbers[i] < 0)
        {
            negative[m] = numbers[i];
            negIndex++;
            m++;
        }
    }
    cout << "Numbers greater than 0 : " << endl;
    for (int i = 0;i <= posIndex;i++)
    {
        cout << positive[i] << " " << endl;
    }
    cout << "Numbers less than 0 : " << endl;
    for (int i = 0;i <= negIndex;i++)
    {
        cout << negative[i] << " " << endl;
    }
    system("pause");
    return 0;
}
