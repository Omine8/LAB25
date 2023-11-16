#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
printf("Enter the string : ");
scanf("%[^\n]s",s);
int l = strlen(s);
char *p;
p=s;
char temp;
for(int i=0;i<l/2;i++)
{
temp=*(p+i);
*(p+i)=*(p+(l-i-1));
*(p+(l-i-1))=temp;
}
printf("Reverse of the string is : %s\n",s);
}

