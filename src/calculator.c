#include "calculator.h"
#include "math.h"
#include"stdio.h"




/* input 2 number with choice of opperator*/
/*this programme uses function Pointer array */
int calci(int num1,int num2,int choice)
{



int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int power(int num1,int num);
int root(int num1,int num);
int logarithm(int num1,int num);



  int  result;
  int (*op[7])(int, int);

  op[0] = add;//choice 1 for add
  op[1] = subtract;//choice 2 for sub
  op[2] = multiply;//choice 3 for multiplication
  op[3] = divide;// choice 4 for divide
  op[4] = power;//choice 5 for num1 power num 2
  op[5] = logarithm;//choice 6 for log num1 to base num2
  op[6] = root;


  result = op[choice](num1, num2);


  return result;
}


int add(int num1, int num2)
{
  int intermidiate;
   intermidiate=num1+num2;
   return(intermidiate);
}

int subtract(int num1, int num2)
{
int intermidiate;
   intermidiate=num1-num2;
   return(intermidiate);
}

int multiply(int num1, int num2)
{
 int intermidiate;
   intermidiate=num1*num2;
   return(intermidiate);
}

int divide(int num1, int num2)
{
  if (num2 != 0)
    return (num1 / num2);
  else
    return 0;
}

int power(int num1, int num2)
{
   int intermidiate;
   intermidiate=pow(num1,num2);
   return(intermidiate);
}

int logarithm(int num1, int num2) {
  int intermidiate;
  intermidiate=log(num1)/log(num2);
  return(intermidiate);
}
int root(int num1, int num2) {
    int intermidiate;
  if (num2 != 0)
    {
        intermidiate=pow(num1,(1/num2));
        return(intermidiate);

    }
  else
    return 0;}

float advance_calci(float num1,int choice)
{
    float square_root(float num1);
    float log_to_10(float num1);
    float natural_log(float num1);
    float sine_fun(float num1);
    float cos_fun(float num1);
    float sec_fun(float num1);
    float cosec_fun(float num1);
    float exponential(float num1);
    float factorial(float number);
    float one_by(float number);
    float modulous(float number);

    float result;
    float (*opa[12])(float);
    opa[0] = square_root;
  opa[1] = log_to_10;
  opa[2] = natural_log;
  opa[3] = sine_fun;
  opa[4] = sec_fun;
  opa[5] = cosec_fun;
  opa[7] = factorial;
  opa[8] = one_by;
  opa[9] = modulous;
  opa[10]= exponential;
  opa[11]= cos_fun;
    result = opa[choice](num1);
    return result;

}
float square_root(float num1)
{
   float intermidiate;
   intermidiate=sqrt(num1);
   return(intermidiate);

}
float log_to_10(float num1)
{
   float intermidiate;
   intermidiate=log(num1)/log(10);
   return(intermidiate);

}
float natural_log(float num1)
{
   float intermidiate;
   intermidiate=log(num1);
   return(intermidiate);

}

float sine_fun(float num1)
{
   float intermidiate;
   intermidiate=sin(num1*(3.14/180));
   return(intermidiate);

}

float cos_fun(float num1)
{
   float intermidiate;
   intermidiate=cos(num1*(3.14/180));
   return(intermidiate);

}

float cosec_fun(float num1)
{
   float intermidiate;
   if(sin(num1*(3.14/180))==0){
    return 0;
   }
   else
    {
   intermidiate=1/sin(num1*(3.14/180));
   return(intermidiate);
    }}


float sec_fun(float num1)
{
   float intermidiate;
   if(cos(num1*(3.14/180))==0){
    return 0;
   }
   else
    {
   intermidiate=1/cos(num1*3.14/180);
   return(intermidiate);
    }
}

float one_by(float num1)
{
   float intermidiate;
   if(num1==0){
    return 0;
   }
   else{
   intermidiate=1/num1;
   return(intermidiate);
   }

}

float exponential(float num1)
{
   float intermidiate;
   intermidiate=exp(num1);
   return(intermidiate);

}
float modulous(float num1)
{
   float intermidiate;
   intermidiate=abs(num1);
   return(intermidiate);

}

float factorial(float num1)
{

  if(num1 < 0)
    return -1;


  if(num1 == 0)
    return 1;


  return (num1 * factorial(num1-1));
}
int matrix(){
    int matrixs_sum();
    int matrix_sub();
    int matrix_mul();
    int (*opm[3])();
    opm[0]=matrixs_sum;
    opm[1]=matrix_sub;
    opm[3]=matrix_mul;
    return 0;
}

int matrixs_sum()
{

int row, coloum;
scanf("%d %d",&row,&coloum);
int index_r, index_c;
int mat1[row][coloum], mat2[row][coloum], mat3[row][coloum];
for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat1[index_r][index_c]);
}
for(index_r = 0; index_r < coloum; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat2[index_r][index_c]);
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
{
mat3[index_r][index_c] = mat1[index_r][index_c] + mat2[index_r][index_c];
}
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
printf("%d ", mat3[index_r][index_c]);
printf("\n");
}

return 0;
}

int matrix_sub()
{

int row, coloum;
scanf("%d %d",&row,&coloum);
int index_r, index_c;
int mat1[row][coloum], mat2[row][coloum], mat3[row][coloum];
for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat1[index_r][index_c]);
}
for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat2[index_r][index_c]);
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
{
mat3[index_r][index_c] = mat1[index_r][index_c] - mat2[index_r][index_c];
}
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
printf("%d", mat3[index_r][index_c]);
printf("\n");
}

return 0;
}

int matrix_mul()
{
int row, coloum, row1, column1, index_r, index_c, index, sum = 0;
int mat1[10][10], mat2[10][10], mat3[10][10];

printf("Enter number of rows and columns of mat1 matrix\n");
scanf("%d%d", &row, &coloum);
printf("Enter elements of matrix a\n");

printf("\nEnter number of rows and columns of mat2 matrix\n");
scanf("%d%d", &row1, &column1);

if (coloum != row1)
printf("\nThe matrices can’t be multiplied with each other.\n");
else
{
printf("\nEnter elements of matrix2\n");

for (index_r = 0; index_r < row1; index_r++)
for (index_c = 0; index_c < column1; index_c++)
scanf("%d", &mat2[index_r][index_c]);

for (index_r = 0; index_r < row; index_r++) {
for (index_c = 0; index_c < column1; index_c++) {
for (index = 0; index < row1; index++) {
sum = sum + mat1[index_r][index]*mat2[index][index_c];
}

mat3[index_r][index_c] = sum;
sum = 0;
}
}

printf("\nProduct of the matrices:\n");

for (index_r = 0; index_r < row; index_r++) {
for (index_c = 0; index_c < column1; index_c++)
printf("%d\t", mat3[index_r][index_c]);

printf("\n");
}
}

return 0;
}


































