//Concantention Using strcat() function
#include<stdio.h>
int main()
{
    char str1[] = "My Name is ";
    char str2[] = "Nusrat Jahan Rima";
    strcat(str1, str2);
    printf("str1 = %s\n", str1);
    return 0;
}