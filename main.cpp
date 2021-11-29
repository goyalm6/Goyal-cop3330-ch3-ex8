/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mayank Goyal
 */

#include <iostream>
#include <string>

using namespace std;

constexpr bool isOdd(uint32_t value) {

    return (value&1);

}

int main()

{

    int number = 0;

    cout << "Enter an integer: ";

    if (cin >> number)
    {

        cout << "The value " << number << " is " << (isOdd(number) ? "odd" : "even");

    }
    else

    cout << "The value is invalid";

  return 0;

}