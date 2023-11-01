//String compare with strcmp() function
#include<stdio.h>
int main()
{
    char str1[] = "Nusrat jahan rimu";
    char str2[] = "Nusrat jahan rima";
    int compare = strcmp(str1, str2);
    if(compare == 0){
        printf("strings are equal");
    }
    else
        printf("strings are not equal");
    return 0;
}