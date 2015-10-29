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
