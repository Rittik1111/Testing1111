#include<stdio.h>
int main()

{
    char str[] = "The name of our county is Bangladesh";
    int i=0,len=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d\n",len);
}
