#include<stdio.h>
#include<string.h>
int main()
{
    int k,i,n,j,r[4],t,T,h;
    scanf("%d",&n);
    char s[n][50];
    fflush(stdin);
    for(i=0;i<n;i++)
    scanf("%s",s[i]);
    for(i=0;i<4;i++)
        r[i]=0;
    r[0]=1;
     for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(s[i]);j++)
        {
        if(s[i][j]=='A')
        {
            t=r[1];
            r[1]=r[2];
            r[2]=t;
        }
        else if(s[i][j]=='B')
        {
            t=r[0];
            r[0]=r[3];
            r[3]=t;
        }
        else if(s[i][j]=='C')
        {
            t=r[0];
            r[0]=r[2];
            r[2]=t;
            T=r[1];
            r[1]=r[3];
            r[3]=T;
        }
        else if(s[i][j]=='D')
        {
            t=r[0];
            r[0]=r[1];
            r[1]=t;
            T=r[2];
            r[2]=r[3];
            r[3]=T;
        }
        else if(s[i][j]=='E')
        {
            t=r[0];
            r[0]=r[3];
            r[3]=t;
            T=r[1];
            r[1]=r[2];
            r[2]=T;
        }
        }
        for(k=0;k<4;k++)
            if(r[k]==1)
            printf("%d\n",k+1);
        for(h=0;h<4;h++)
        r[h]=0;
    r[0]=1;

    }




}
