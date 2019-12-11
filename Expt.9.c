
/*Expt.no-9 C program to display different patterns formed by combination of '*'
  Roll.no-21  */

#include<stdio.h>
int main()
{
	int i,j,n=5;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" ");
			if(i==j||i+j==n-1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" ");
			if(i+j==i||i+j==j||i+j==j+2||i==1&&j==4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" ");
			if(i==j||j==i)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" ");
			if(i+j==j)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" ");
		if(i==2||j==4)
		{
			printf("*");
		}
	}
	printf("\n");
	}
	getchar();
}

/* Output:
user@user-ThinkCentre-M55e:~/Desktop$ gcc Exp9.c -oExp9
user@user-ThinkCentre-M55e:~/Desktop$ ./Exp9
 *    *
  *  * 
   *  
  *  * 
 *    *


 * * * * *
 *       *
 * * * * *
 *        
 *        


 *    
  *   
   *  
    * 
     *


 * * * * *
     
     
     
     
     *
     *
 * * * * *
     *
     *

*/
