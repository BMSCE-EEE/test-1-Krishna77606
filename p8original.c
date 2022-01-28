#include<stdio.h>
float input();
float m_sqrt(float n);
void output(float n, float squareroot_result);
int main()
{
  float x,sr;
  x=input();
  sr=m_sqrt(x);
  output(x,sr);
  return  0;
  }
float input()
{
  float y;
  printf("enter a number\n");
  scanf(%f,&y);
  return y;
}
float m_sqrt(float n)
{
  float y=1,x=n;
  float e=0.000001;

  while(x-y>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
void output(float n,float squareroot_result)
{
  printf("square root of %0.2f is %0.2f",n,squareroot_result);
}