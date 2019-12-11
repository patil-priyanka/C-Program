//Expt no:12 c program to swap two numbers by using user defined function
//Roll no:
#include<stdio.h>
#include<conio.h>
  void main()
    {
    void swap1(int *,int *);
    void swap2(int,int);
	int a,b;
	clrscr();
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping:\n");
	printf("\n A \t B \n");
	printf("\n%d \t %d\n",a,b);
	swap2(a,b);
	swap1(&a,&b);
	printf("\n\n After swapping by reference");
	printf("\nA \t B \n");
	printf("\n%d \t %d \n",a,b);
	getch();
	}
	void swap1(int*p,int*q)
	{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	}
	void swap2(int p,int q)
	{
	int temp;
	temp=p;
	p=q;
	q=temp;
	printf("\n After swapping by call:\n");
	printf("\n A \t B \n");
	printf("\n%d \t %d \n",p,q);
	   }

 /* output:
 Enter two number:
12
56
Before swapping:

 A       B

12       56

 After swapping by call:

 A       B

56       12


 After swapping by reference
A        B

56       12
*/

                                                                                
                                                                                
                                                                                
