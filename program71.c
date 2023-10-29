//
#include<stdio.h>
#include<string.h>
int main()
{
    char text[] = "hello world. i am learning string. my phone number is 0406759900"; // string ends with '\0'

    int numOfVowel = 0, numOfConsonat=0,numOfDigits=0;
    for (int i = 0; text[i] != '\0'; i++){
        if(text[i] == 'a' || text[i]=='e'|| text[i]=='i'|| text[i]=='o'||text[i]=='u'){
            numOfVowel++;
        }
        else if(text[i]>='a' && text[i]<='z'){
            numOfConsonat++;
        }
        else{
            numOfDigits++;
        }
    }
    printf("number of vowels: %d\n", numOfVowel);
    printf("number of Consonants: %d\n", numOfConsonat);
    printf("number of Digits: %d\n", numOfDigits);


    return 0;
}
