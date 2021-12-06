#include<stdio.h>
void add(float p, float q);
float input();
void output(float add);
int main()
{
 float a,b,sum;
 a=input();
 b=input();
 sum = add(a,b);
 output(sum);
 return 0;
}
float input()
{
 int A;
 printf("enter any 2 numbers\n");
 scanf ("%f",&A);
 return A;
}
float add(float p,float q)
{
float S;
S=p+q;
return S;
}
void output(float add)
{
printf( "the sum of 2 numbers is=%d\n",sum);
}

