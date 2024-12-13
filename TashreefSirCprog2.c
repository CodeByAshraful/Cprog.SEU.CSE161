//Write a program in C to find whether a given number n is odd or even.

#include<stdio.h>
int main(void)
{
   int n;
   printf("Enter any number : ");
   scanf("%d",&n);//User input with scanf
   if(n%2==0){
    printf("%d is a even number\n",n);
   }
   else if(n%2!=0){
    printf("%d is a odd number\n",n);
   }
   else{
    printf("The number is not a valid number\n");
   }


    return 0;
}
