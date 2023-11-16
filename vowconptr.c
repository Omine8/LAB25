#include<stdio.h>
#include<string.h>
int IsVow(char *c)
{
if(*c== 'a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u' || *c == 'A' || *c== 'E' || *c == 'I' || *c == 'O' || *c == 'U')
return 1;
else
return 0;
}
int main()
{
char s[50];
int vc=0,cc=0;
printf("Enter the string : ");
scanf("%[^\n]s",s);
int l = strlen(s);
char *p;
p=s;
for(int i=0;i<l;i++)
{
if(IsVow(p+i))
vc++;
else if(*(p+i)==' ' || *(p+i)=='\0')
continue;
else
cc++;
}
printf("Number of vowels are : %d\n",vc);
printf("Number of consonants are : %d\n",cc);
}

