#incude<stdio.h>
int input_array_size();
int input_array(int n,int a[n]);
int sum_n_array(int n,int a[n]);
int output(int add);
int main()
{
  int n,add;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  output(add);
  return 0;
  }
  int input_array_size()
  {
    int n;
    printf("number of elements are");
    scanf("%d",&n);
    return n;
  }
  int input_array(int n,a[n])
  {
    int i;
    for (i=o;i<n;i++)
    {  
    scanf ("%d",&a[i] );

    }
  }
  int sum_n_array(intn,int a[n])
  {
   int i,sum=0;
   for(i=0;i<n;i++)
   { 
   sum=sum+a[i];
    return sum;
    }
  }
  int output(int add)
  {
    printf("Sum is %d",add);

  }
  