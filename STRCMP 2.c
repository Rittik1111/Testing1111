#include<stdio.h>
#include<string.h>
int string_compare(char str1[], char str2[]);
int main()

{
    char name1[50],name2[50];
    gets(name1);
    gets(name2);
    if(string_compare(name1,name2)==1)
        printf("String are same");
    else
        printf("String are not same");
}
int string_compare(char str1[],char str2[])
{
    int i=0,com=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            com=1;
            break;
        }
        i++;
    }
    if(com==0 && str1[i]=='\0' && str2[i]=='\0')
        return 1;
    else
        return 0;
}
