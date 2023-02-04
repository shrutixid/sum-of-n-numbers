#include<stdio.h>
void main()
{
  printf("The following program is to print the sum of all numbers between 1 and n which is provided by user\n");
  int n,sum=0;
  printf("Enter a number:- ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("\n%d is the sum of all the numbers between 1 and %d",sum,n);
}
