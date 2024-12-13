/*Write a program in C that takes a character input from the user and identifies whether it is a vowel or a
consonant.*/
#include<stdio.h>

int main(void)
{
   char ch;
   printf("Enter any character(A-Z) : ");
   scanf("%c",&ch);
   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
          printf("%c is a vowel.\n",ch);
      }
      else{
        printf("%c is a consonant.\n",ch);
      }


    return 0;
}
