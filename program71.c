//using string for counting numbers of digit,vowels,consonant,special charecter
#include<stdio.h>
#include<string.h>
int main()
{
    char text[] = "he 0406759900@ anis"; // string ends with '\0'

    int numOfVowel = 0, numOfConsonat=0,numOfDigits=0,numOfSpecialchar=0,numOfSpaces=0,numOfwords=0;
    for (int i = 0; text[i] != '\0'; i++){
        if(text[i] == 'a' || text[i]=='e'|| text[i]=='i'|| text[i]=='o'||text[i]=='u'){
            numOfVowel++;
        }
        else if(text[i]>='a' && text[i]<='z'){
            numOfConsonat++;
        }
        else if(text[i]>='0' && text[i]<='9'){
            numOfDigits++;
        }
        else if(text[i]==' '){
            numOfSpaces++;
            numOfwords++;
        }
        else{
            numOfSpecialchar++;
        }
    }
    printf("number of vowels: %d\n", numOfVowel);
    printf("number of Consonants: %d\n", numOfConsonat);
    printf("number of Digits: %d\n", numOfDigits);
    printf("number of Special char: %d\n", numOfSpecialchar);
    printf("number of Spaces: %d\n",numOfSpaces);
    printf("number of words: %d\n",numOfwords + 1);





    return 0;
}

