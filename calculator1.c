#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
float Summation ()
{
    float x,y;
    printf("What numbers do u want to add?");
    scanf("%f %f",&x,&y);
    return x+y;
}
float Substraction()
{
    float x,y;
    printf("What numbers do u want to substract?");
    scanf("%f %f",&x,&y);
    return x-y;
}
float Multiplication()
{
    float x,y;
    printf("What numbers do u want to multiply?");
    scanf("%f %f",&x,&y);
    return x*y;
}
float Division()
{
    float x,y;
    printf("What numbers do u want to divide?");
    scanf("%f %f" ,&x,&y);
    return x/y;
}
float SQRT ()
{
    float square,x;

    printf("Which number do you want to find the root of?");
    scanf("%f",&x);
    square=sqrt(x);
    return square;
}
float POWER()
{
    float power,x;
    int m;
     printf("What is the base and the exponent?");
    scanf("%f %d",&x,&m);
    power=pow(x, m);
    return power;
}
float Average()
{
    float number,sum;
    int n;
    printf("How many numbers do u want to find the average of?");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&number);
        sum+=number;
    }
    return sum/n;
}
int main()
{
    //Welcome to my first lines of this code.

    char sign;
    printf("What operation do you want to do?\n");
printf("Type + for addition,- for substraction,* for multiplication ,/ for division,^ for power and s for square root and a for average");
scanf("%c",&sign);
if(sign=='+'){
 printf("%.3f",Summation());
}
else if(sign=='-')
{
     printf("%.3f",Substraction());
}
else if(sign=='*')
{
     printf("%.3f",Multiplication());
}
else if(sign=='/')
{
     printf("%.3f",Division());
}
else if(sign=='^')
{
     printf("%.3f",POWER());
}
else if(sign=='s')
{
     printf("%.3f",SQRT());
}
else if(sign=='a')
{
    printf("%.3f",Average());
}
}
