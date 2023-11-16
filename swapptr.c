#include<stdio.h>
int swap(int *a,int *b)
{
int temp;
temp = *a;
*a=*b;
*b=temp;
}
int main()
{
int x,y;
printf("Enter x : ");
scanf("%d",&x);
printf("Enter y : ");
scanf("%d",&y);
int *p=&x;
int *q=&y;
swap(p,q);
printf("x = %d\n",x);
printf("y = %d\n",y);
}
