
#include<stdio.h>
int main()
{

int i,j=3,k,n;
scanf("%d",&n);
for(i=1;i<=n;i++)

{   
	for(k=1;k<=i;k++)
	{     
			printf("%d",j);
		}
		
	j++;
	printf("\n");}
	j--;
	for(i=3;i>=1;i--)

{   
	for(k=i;k>=1;k--)
	{     
			printf("%d",j);
		}
		
	j--;
	printf("\n");}
	}
	
/*  Output:-  3
              44
              555
              555
              44
              3 */
