#include<stdio.h>
float input();
float  add(float p, float q);
void output(float add);
int main()
{
 float a,b,sum;
 a=input();
 b=input();
 sum=add(a,b);
 output(sum);
 return 0;

}
float input()
{
 float A;
 printf("enter any 2 numbers\n");
 scanf ("%f",&A);
 return A;
}
float add(float p,float q)
{
float s;
s=p+q;
return s;
}
void output(float add)
{
printf( "the sum of 2 numbers is=%f\n",add);
}
