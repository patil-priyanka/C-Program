/*    Experiment no.15:-c program to count vowels in string & 
             string after removing vowels                     */
#include<stdio.h>
#include<conio.h>
void remvow(char *);
void main()
{
	char str[20];
	int count = 0, i = 0;
	clrscr();
	printf("\n ENTER A STRING: \n");
	gets(str);
	printf("Vowels are:\n");
	while(str[i] != '\0')
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||
		   str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||
		   str[i]=='U'||str[i]=='u')
			count++;
		i++;
	}
	printf("%d\n",count);
	remvow(str);
}
	void remvow(char *t)
{
	printf("String after removing vowels:\n");
	while(*t!='\0')
{
	if(!( *t=='a'||*t=='A'||*t=='e'||*t=='E'||
	      *t=='i'||*t=='I'||*t=='o'||*t=='O'||
	       *t=='u'||*t=='U'))
	printf("%c",*t);
	t++;
	}
	getch();
}
/*
OUTPUT:

 ENTER A STRING:                                                                
 WELCOME
 Vowels are:
 3
 String after removing vowels:
 WLCM
	*/
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
