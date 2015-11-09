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

int Recursion::sum (int num)
{
if (num==0)
return 0;
return (sum(num-1)+(num));
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
void Recursion::print_backwards()
	{
		char character;

		cout << "Enter a character ('.' to end program): ";
		cin >> character;
		if (character != '.')
		{
			print_backwards();
			cout << character;
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
float Recursion::raised_to_power(float number, int power)
	{
		if (power < 0)
		{
			cout << "\nError - can't raise to a negative power\n";
			exit(1);
		}
		else if (power == 0)
			return (1.0);
		else
			return (number * raised_to_power(number, power - 1));
	}
void Recursion::sortAscending ( int arr[], int size ) {
    int maxIndex = 0, temp = 0, index = 0;
    for ( index = maxIndex; index < size; index++ ) {
        if ( arr[index] > arr[maxIndex] ) {
            maxIndex = index;
        }
    }
    temp = arr[size-1];
    arr[size-1] = arr[maxIndex];
    arr[maxIndex] = temp;

    if ( size > 1 ) {
        sortAscending ( arr, --size ) ;
    }
}

// sort the array in descending order with selection sort
void Recursion::sortDescending ( int arr[], int size ) {
    int maxIndex = 0, temp = 0, index = 0;
    for ( index = maxIndex; index < size; index++ ) {
        if ( arr[index] < arr[maxIndex] ) {
            maxIndex = index;
        }
    }
    temp = arr[size-1];
    arr[size-1] = arr[maxIndex];
    arr[maxIndex] = temp;

    if ( size > 1 ) {
        sortDescending ( arr, --size ) ;
    }
}

// output contents of array to screen
void Recursion::printArray(int arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
