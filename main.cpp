#include<stdio.h>
int main()
{
int num1, num2,num3, sum;                      //declarations of the integers
printf("\nEnter three no: ");               //Numbers which are to be added
scanf("%d %d %d", &num1, &num2, &num3);     //for accepting integer inputs
sum = num1 + num2 + num3;
printf("Sum of %d, %d and %d is %d", num1,num2,num3, sum); //display the required output
return(0);
}
