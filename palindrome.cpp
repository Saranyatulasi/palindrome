#include<stdio.h>
#include<string.h>
int main()
{
	int i;
char s1[100];
scanf("%s",&s1);
int len=strlen(s1);
char s2[100];
for(int i=0;i<len;i++)
{
s2[i]=s1[len-i-1];

printf("%c",s2[i]);
}
int palindrome;
for(int i=0;i<len;i++)
{

if(s2[i]==s1[i]) 
palindrome=1;
else palindrome=0;
}

if (palindrome==1)
printf("\npalindrome");
else
printf("not palindrome");
}