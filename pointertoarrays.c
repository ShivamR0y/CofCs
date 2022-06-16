#include<stdio.h>
void doubler();
void main()
{
  int a[5] = {1,2,3,4,5};
  int length = sizeof(a)/sizeof(int);
  int* p = a;
  int i = 2;
  printf("base address of array a = %d\n",a);
  printf("value at base address of a = %d\n",*a);
  printf("address of index i &a[i] = %d\n",a+i);
  printf("value at index i a[i] = %d\n",*(a+i));
  printf("value at index 1 = %d\n",*(p+1));
  printf("value at base address = %d\n",*p);
  
  doubler(a,length);
  
  printf("value of a[0] = %d\n",*a);
}
void doubler(int* p,int length)
{
  for(int i= 0;i<length;i++)
  {
    p[i]= 2*p[i];
  }
}
