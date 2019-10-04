#include<stdio.h>
int main(){ 
	int fact=1,i;
 	
	printf("Enter the number : \n");
 	scanf("%d",&i);
 	
	while(i!=0){	//loop to multiply digit till 1 at 0 condition will be false and factorial will be printed !

 	fact=fact*i;	   
 	i--;			    
 	}
	
 	printf("%d",fact);

	 return 0;
}
