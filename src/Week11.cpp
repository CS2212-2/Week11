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

	     return 0;
	 }


