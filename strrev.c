#include<stdio.h>
int main()
{
    char str1[100] = "hsedalgnaB fo ytisrevinU neerG";
    char str2[150];
    int i=0,j,len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);
}
