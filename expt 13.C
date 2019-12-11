#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,*p1,*p2,ch,add,sub,mul,div,in,de;
  clrscr();
  printf("Enter two numbers:\n");
  scanf("%d %d",&a,&b);

  p1=&a;
  p2=&b;
 while(1)
{
  printf("\n 1.addition\n 2.substraction\n 3.multiplication\n 4.dividation\n 5.increment\n 6.decrement\n 7.exit\n ");
  printf("Enter your choice\n");
  scanf("%d",&ch);
  switch(ch)
{
  case 1:
  add=*p1 + *p2;
  printf("addition of given numbers is %d",add);
  break;

  case 2:
  sub=*p1 - *p2;
  printf("substraction of given numbers is %d",sub);
  break;

  case 3:
  mul=*p1 * *p2;
  printf("multiplication of given numbers is %d",mul);
  break;

  case 4:
  div=*p1 / *p2;
  printf("dividation of given numbers is %d",div);
  break;

  case 5:

  printf("increment of given numbers is %d",*p1+1);
  break;

  case 6:
  de=*p1 - 1;
  printf("decrement of given numbers is %d",de);
  break;

  case 7:
  exit(0);

}
}
  getch();
}
/*
output:-
Enter two numbers:
4 6                                                                             
                                                                                
 1.addition                                                                     
 2.substraction                                                                 
 3.multiplication                                                               
 4.dividation                                                                   
 5.increment                                                                    
 6.decrement                                                                    
 7.exit                                                                         
 Enter your choice                                                              
4                                                                               
dividation of given numbers is 0                                                
 1.addition                                                                     
 2.substraction                                                                 
 3.multiplication
 4.dividation
 5.increment
 6.decrement
 7.exit
 Enter your choice
7            */





