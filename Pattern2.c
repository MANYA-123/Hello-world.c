/*
 ============================================================================
 Name        : 
 Author      : 
 Description :
 ============================================================================
 */
#include<stdio.h>
int main()
{

int i,j=3,k,n;//Decleration of variables n is number of rows
scanf("%d",&n);
for(i=1;i<=n;i++)//Looping till i less than n
{  
	for(k=1;k<=i;k++)//Loop to print j
	{ 
		printf("%d",j);
	}
	j++;//Post increamenting j till k<=i
	printf("\n");}
	j--;//Post decrement to print j in decreasing order
	for(i=n;i>=1;i--)//Looping till i is greater than one
	{   
	for(k=i;k>=1;k--)//Loop to print j
	{     
	printf("%d",j);
	}
	j--;//Post drecement
	printf("\n");//To move into new line}
}
	
/*  Output:-  3
              44
              555
              555
              44
              3
	          if n=3*/
}
