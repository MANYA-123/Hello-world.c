
/*
 ============================================================================
 Name        : Halfdiamondpattern
 Author      : Swapnil bhojwani
 Description :This program will print halfdiamond pattern of numbers
 ============================================================================
 */
#include<stdio.h>
int main()
{

int i,j,k,n; //n= number of rows, j= starting number

scanf("%d",&j);
scanf("%d",&n);

for(i=1;i<=n;i++)
{  
	for(k=1;k<=i;k++)
	{ 
		printf("%d",j);
	}
	j++; //Post increamenting j till k<=i
	
	printf("\n");}
	j--; //Post decrement to print j in decreasing order
	
	for(i=n;i>=1;i--) //Looping till i is greater than one
	{   
	for(k=i;k>=1;k--)
	{     
	printf("%d",j);
	}
	j--; //Post decrement
	
	printf("\n");
}}

/*  Output:-  3
              44
              555
              555
              44
              3
	          if n=3,j=3*/

