#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    scanf("%s",s);
    int i=0,n;
    do
    {
        if(s[i]!=s[i+1])
            printf("%c",s[i]);
            i++;
    }
    while(i!=strlen(s));
}
