#ifndef RECURSION_H
#define RECURSION_H

#include <iostream>
#include <string>
#include <math.h>


using namespace std;

class Recursion
{
	private:


	public:

	Recursion();

	long factorial(int n);
	void method1(int i);
	int tail_factorial(int number) ;
	int factorial_i(int currentNumber, int sum) ;
	int Fibonacci(int n);
	bool isPrime(int n, int d);

};
#endif /*RECURSION_H_*/
