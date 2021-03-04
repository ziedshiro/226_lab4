#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,N[n][3],r[n-2],x=1;
    for(i=0;i<n-2;i++)
        r[i]=0;
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
            scanf("%d",&N[i][j]);
    for(i=0;i<n-2;i++)
    {
        for(j=i;j<i+3;j++)
    {
        if(N[j][0]>0)
        {
            x=x*N[j][0]*4;
            r[i]+=x;
             x=1;
        }
        if(N[j][1]>0)
        {
            x=x*N[j][1]*2;
            r[i]+=x;
             x=1;
        }
        if(N[j][2]>0)
        {
            x=x*N[j][2]*1;
            r[i]+=x;
             x=1;
        }
    }
    }

    for(i=0;i<n-2;i++)
        printf("%d\n",r[i]);


}
