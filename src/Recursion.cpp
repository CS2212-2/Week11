/*
/ * Recursion.cpp
 *
 *  Created on: Oct 29, 2015
 *      Author: Izzat Alsmadi
 */
#include <iostream>
#include <stdio.h>
#include "Recursion.h"
#include <math.h>
#include <stdlib.h>


using namespace std;

Recursion::Recursion(){}

long Recursion:: factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

void Recursion::method1(int i) {
  cout << "The number is: " << i << endl;
  i++;
  if(i<10) {
    method1(i);
  }
}

bool Recursion::isPrime(int n, int d)
{
    if(n<2)
        return 0;
    if(d == 1)
        return true;
    else
    {
        if(n % d == 0)
            return false;
        else
            return isPrime(n, d - 1);
    }
}

int Recursion::tail_factorial(int number) {
    if(number == 0) {
           return 1;
        }
     return  Recursion::factorial_i(number, 1);
}

int Recursion::factorial_i(int currentNumber, int sum) {
    if(currentNumber == 1) {
        return sum;
    } else {
        return factorial_i(currentNumber - 1, sum*currentNumber);
    }
}

int Recursion::Fibonacci(int n)
{
if (n==0)
    return 0;
if (n==1)
    return 1;
return( Recursion::Fibonacci(n-2) + Recursion::Fibonacci(n-1) );
}
