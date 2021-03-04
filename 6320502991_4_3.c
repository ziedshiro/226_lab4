#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    gets(s);
    int i=0,n;
    n=strlen(s);
    do
    {
        if(s[i]!=s[i+1])
            printf("%c",s[i]);
            i++;
    }
    while(i!=n);
}
