//Exp 14:input 10 number from user &sort it using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int n,*p,i,j,temp;
clrscr();
printf("\n How many numbers:");
scanf("%d",&n);
p=(int *)malloc(n*2);
if(p==NULL)
{
printf("\n memory allocation UNSUCCSSFULL");
}
for(i=0;i<n;i++)
{
printf("\n enter number: %d",i+1);
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
 if(*(p+i)<*(p+j))
 {
   temp=*(p+i);
   *(p+i)=*(p+j);
   *(p+j)=temp;
  }
 }
}
printf("\n The sorted number are:\n");
for(i=0;i<n;i++)
{
printf("%d",*(p+i));
}
getch();
}


/*
output:-

 How many numbers:5                                                             
                                                                                
 enter number: 16                                                               
                                                                                
 enter number: 28                                                               
                                                                                
 enter number: 39                                                               
                                                                                
 enter number: 47                                                               
                                                                                
 enter number: 59                                                               
                                                                                
 The sorted number are:                                                         
67899                                                                           
      */

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
