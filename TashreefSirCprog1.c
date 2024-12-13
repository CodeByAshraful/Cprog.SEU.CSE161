/*Given the value of three floating-point numbers a, b, and c write a program in C to find whether or not
it is possible to create a triangle holding three sides of lengths a, b, and c. */

#include<stdio.h>
int main(void)
{
   float a,b,c;
   //input three floating point numbers.
   printf("Enter side a : ");
   scanf("%f",&a);
   printf("Enter side b : ");
   scanf("%f",&b);
   printf("Enter side c : ");
   scanf("%f",&c);
   //condition.
   if(a+b>c && a+c>b && b+c>a){
    printf("Possible to create a triangle\n");
   }
   else{
    printf("Not possible to create a triangle\n");
   }


    return 0;
}

