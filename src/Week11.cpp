//============================================================================
// Name        : Week11.cpp
// Author      : Izzat Alsmadi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include "Recursion.h"
using namespace std;

int main() {
	      Recursion r1;
	     // Variable Declaration
	     int counter, n;
	     // Get Input Value
	     cout<<"Enter the Number :";
	     cin>>n;
	     // Factorial Function Call
	    // cout<<n<<" Factorial Value Is "<<r1.factorial(n);
	     	cout<<n<<" Tail Factorial Value Is "<<r1.tail_factorial(n) << endl;
	    // r1.method1(n);
	     cout<<n<<" Fibonacci Value Is "<<r1.Fibonacci(n)<< endl;
	     cout<<n<<" Check if is Prime Value Is "<<r1.isPrime(n,2)<< endl;

	     // print backward
	     r1.print_backwards();
	     float output = r1.raised_to_power(5,2) ;
	     int arr[8] = { 23,45,6, 20, 5, 31, 66,99 };
	         cout << "Sorting in ascending order..." << endl;
	         cout << "Original array:\t";
	         r1.printArray(arr, 8);
	         r1.sortAscending(arr, 8);
	         cout << "Sorted array:\t";
	         r1.printArray(arr, 8);
	     return 0;
	 }


