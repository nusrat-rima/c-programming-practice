//Copying String using strcpy
#include<stdio.h>
int main()
{
    char source[] = "C Programming";
    char target[20];
    strcpy(target, source);
    printf("Source String = %s\n", source);
    printf("Target String = %s\n", target);
    return 0;
}