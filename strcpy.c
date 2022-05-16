#include<stdio.h>

char *string_copy(char [], char []);

int main()

{
    char name1[50]="Mahendra Singh Dhoni";
    char name2[50];
    string_copy(name1,name2);
    printf("Name 1 = %s\n",name1);
    printf("Name 2 = %s\n",name2);

}
char *string_copy(char str1[], char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    return str2;
}
