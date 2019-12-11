Exp 16.3
roll no:
#include<stdio.h>
//#include<conio.h>

struct book
{
char title[30],author[20];
float price;
}b[2];

int main()

{
int i;
//clrscr();

printf("enter information for two books:\n");
for(i=0;i<2;i++)
{
printf("\n book title \n");
scanf("%s",&b[i].title);
printf("enter author name:\n");
scanf("%s",&b[i].author);
printf("enter price:\n");
scanf("%f",&b[i].price);
}

printf("displaying information of two book:\n\n");
for(i=0;i<2;i++)
{
printf("title :%s \n", b[i].title);
printf("author name:\n", b[i].author);
printf("price : %f\n",b[i].price);

}
 getchar();
return 0;
}



/*output
enter information for two books:

 book title 
a
enter author name:
aa
enter price:
33

 book title 
s
enter author name:
ss
enter price:
44
displaying information of two book:

title :a 
author name:
price : 33.000000
title :s 
author name:
price : 44.000000
user@user-ThinkCentre-M55e:~/Desktop$ 

*/


