#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char s[n+1];
    fflush(stdin);
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
            printf("%c",s[i]);
    }
}

