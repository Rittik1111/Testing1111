#include<stdio.h>
int main()

{
    char str[50],c;
    int i=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>=97 && str[i]<=122)
        {
           str[i]=str[i]-32;
        }
        i++;
    }
    printf("STR UPPER = %s\n",str);
}
