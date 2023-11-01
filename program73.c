//String for charecter wise print
#include<stdio.h>
int main()
{
    char s1[] = "Nusrat Jahan Rima";
    int i = 0;
    while(s1[i]!='\0'){
        printf("%c\n", s1[i]);
        i++;
    }
    return 0;
}