#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter the number of elements : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements : \n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int *p;
p=arr;
int temp;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if((*p+i)>(*p+j))
{
temp = *(p+i);
*(p+i) = *(p+j);
*(p+j) = temp;
}
}
}
printf("The array after sorting is : ");
for(int i=0;i<n;i++)
{
printf("%d ",*(p+i));
}
printf("\n");
}
