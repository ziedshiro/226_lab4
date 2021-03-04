#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    gets(s);
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=s[i+1])
            printf("%c",s[i]);
    }
}
