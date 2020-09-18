#include<stdio.h>
/**
* @file factorial.h
*
*/
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__



/**
* Calculates the factorial of integer number
* @param[in] 1st Number
* @param[in] 2st Number
* @param[in] choice of operator 0:add,1:sub,2:multiply,3:divide
* @return int out of number1(choice)number2
* @note Returns 0 for divide with 0
*@note output is in int form
*/
int calci(int number,int number2,int choice);
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

#endif /* #ifndef __FACTORIAL_H__ */
