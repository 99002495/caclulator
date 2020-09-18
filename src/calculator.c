#include "calculator.h"
#include<math.h>

/* input 2 number with choice of opperator*/
/*this programme uses function Pointer array */
int calci(int num1,int num2,int choice)
{



int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);



  int  result;
  int (*op[4])(int, int);

  op[0] = add;//choice 1 for add
  op[1] = subtract;//choice 2 for sub
  op[2] = multiply;//choice 3 for multiplication
  op[3] = divide;// choice 4 for divide



  result = op[choice](num1, num2);


  return result;
}
/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/
// functions to add, mull, sub, divide

int add(int num1, int num2) {
  return(num1 + num2);
}

int subtract(int num1, int num2) {
  return(num1 - num2);
}

int multiply(int num1, int num2) {
  return(num1 * num2);
}

int divide(int num1, int num2) {
  if (num2 != 0)
    return (num1 / num2);
  else
    return 0;
}
