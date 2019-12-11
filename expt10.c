
#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k,ch;
	
	printf("Enter the matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
			
	}
	printf("Enter second matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
			
	}
	while(i)
	{
		printf("\n1 Addition");
		printf("\n2 Substraction");
		printf("\n3 Multiplication");
		printf("\n4 Transpose");
		printf("\n5 Exit");
		printf("\n6 Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			 case 1:
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						c[i][j]=a[i][j]+b[i][j];	
					}
				}
				printf("The addition is: \t  ");
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						printf("%4d",c[i][j]);
					}
				}
				break;
	
				case 2:
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						c[i][j]=a[i][j]-b[i][j];	
					}
				}
				printf("The Substraction is");
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						printf("%3d",c[i][j]);
					}
				}
				break;	

				case 3:
					
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							for(k=0;k<3;k++)
							{							
								c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
							}	
						}
					}
					printf("The Multiplication is");
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							printf("%5d",c[i][j]);
						}
						printf("\n");
					}
					break;
					
					case 4:
						
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							c[j][i]=a[i][j];	
						}
					}
					printf("Transpose is :");
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							printf("%3d",c[i][j]);
						}
						printf("\n");
					}
					break;

						default:
							
						printf("Invalid choice");
				break;
		}

	
	}
	
}
/*output

user@user-ThinkCentre-M55e:~$ cd Desktop
user@user-ThinkCentre-M55e:~/Desktop$ gcc Exp10.c
user@user-ThinkCentre-M55e:~/Desktop$ ./a.out
Enter the matrix 
1
2
3
4
5
6
7
8
9
Enter second matrix 
9
8
7
6
5
4
4
3
2

1 Addition
2 Substraction
3 Multiplication
4 Transpose
5 Exit
6 Enter your choice1
The addition is: 	    10  10  10  10  10  10  11  11  11
1 Addition
2 Substraction
3 Multiplication
4 Transpose
5 Exit
6 Enter your choice2
The Substraction is -8 -6 -4 -2  0  2  3  5  7
1 Addition
2 Substraction
3 Multiplication
4 Transpose
5 Exit
6 Enter your choice3
The Multiplication is   25   21   17
   88   75   62
  150  128  106

1 Addition
2 Substraction
3 Multiplication
4 Transpose
5 Exit
6 Enter your choice4
Transpose is :  1  4  7
  2  5  8
  3  6  9

1 Addition
2 Substraction
3 Multiplication
4 Transpose
5 Exit
6 Enter your choice5
Invalid choice
*/		



