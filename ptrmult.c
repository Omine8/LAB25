#include<stdio.h>
int main()
{
int x,y;
printf("Enter the 1st number : ");
scanf("%d",&x);
printf("Enter the 2nd number : ");
scanf("%d",&y);
int *p=&x;
int *q=&y;
int pr= *p **q;
printf("Product is : %d\n",pr);
}
