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
	int sum (int num);
	void print_backwards();
	int tail_factorial(int number) ;
	int factorial_i(int currentNumber, int sum) ;
	int Fibonacci(int n);
	float raised_to_power(float number, int power);
	bool isPrime(int n, int d);
	void sortAscending ( int arr[], int size ) ;
	void sortDescending ( int arr[], int size );
	void printArray(int arr[], int size) ;

};
#endif /*RECURSION_H_*/
