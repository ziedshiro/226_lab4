#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,N[5],j=0;
    for(i=0;i<5;i++)
        N[i]=0;
    scanf("%d",&n);
    char s[n+1];
    fflush(stdin);
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
            if(s[i]=='+')
                N[j-1]+=N[j];
            else if(s[i]=='-')
                N[j-1]-=N[j];
            else if(s[i]=='*')
                N[j-1]*=N[j];
            else if(s[i]=='/')
                N[j-1]/=N[j];
            N[j]=0;
            j--;
        }
        else
        {
            N[j]=s[i];
            j++;
        }
    }
    printf("%d",N[j]);
}

