//
#include<stdio.h>
#include<string.h>
int main()
{
    char text[] = "hello world, my name is is anisul"; // string ends with '\0'

    printf("total characters with strlen: %d\n", strlen(text));


    int count = 0;
    for (int i = 0; text[i] != '\0'; i++){
        count++;
    }
    printf("total characters without strlen: %d\n", count);

    return 0;
}
