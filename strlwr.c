#include<stdio.h>
int main()

{
    char str[50],c;
    int i=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("STR lower = %s\n",str);
}
