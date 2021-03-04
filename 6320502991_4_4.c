#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^\n]s",s);
    char* t=strtok(s," "),i=0;
    while(t!=NULL)
    {
        if(i==0)
            printf("%c",toupper(t[0]));
        if(i!=0&&strcmp(t,"i")&&strcmp(t,"of")&&strcmp(t,"the")&&strcmp(t,"on")&&strcmp(t,"at")&&strcmp(t,"for")&&strcmp(t,"with")&&strcmp(t,"a")&&strcmp(t,"an")&&strcmp(t,"in")&&strcmp(t,"and"))
            printf("%c",toupper(t[0]));
        i++;
        t=strtok(NULL," ");
    }
}
