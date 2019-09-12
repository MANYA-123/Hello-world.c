#include<stdio.h>
int main()
{ int fact=1,i;//decleration of variables
 printf("Enter the number");
 scanf("%d",&i);
 while(i!=0)//loop to multiply digit till 1 at 0 condition will be false and factorial will be printed
 {
 	fact=fact*i;//fact=1*i then i will be stored in fact next time i*i-1 will run after whole process at the end i*(i-1)*.....1
 	i--;//to decreament i by 1 }
 
 printf("%d",fact);//to print factorial of the number
}
