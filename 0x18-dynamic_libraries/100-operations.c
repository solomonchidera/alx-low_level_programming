#include<stdio.h>  
  
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div_num(int a, int b);
int mod(int a, int b);

  
int add(int a, int b)
{  
    int c;
    c = a + b;
    return (c);  
}

int sub(int a, int b)
{
    int c;

    c = a - b;
    return (c);
}

int mul(int a, int b)
{
    int c;

    c = a * b;
    return (c);
}

int div(int a, int b)
{    
    int c;

    c = a / b;
    return (c);
}

int mod(int a, int b)
{
    int c;

    c = a % b;
    return (c);
}

