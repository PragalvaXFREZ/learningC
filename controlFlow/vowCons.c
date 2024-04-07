//to check if the given character is vowel or consonant

#include<stdio.h>
int main()
{
    char cha;
    int lowerCase, upperCase;
    printf("Enter the character");
    scanf("%c",&cha);
    lowerCase=(cha== 'a' || cha== 'e' || cha=='i' || cha== 'o' || cha== 'u' );
    upperCase=(cha== 'A' || cha== 'E' || cha=='I' || cha== 'O' || cha== 'U' );
    if ( lowerCase || upperCase)
    {
        printf("character is vowel");
    }
    else
    {
        printf("Character is consonant");
    }
   
}