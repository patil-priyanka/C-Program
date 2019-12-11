//Expt no.8.2 Findout the smallest element in arry
//Roll no.

#include<stdio.h>
void main()
{
int i,n,small;
int arr[20];
printf("\n Enter the number of element:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
small=arr[10];
for(i=0;i<n;i++)
if(arr[i]<small)
{
small=arr[i];
for(i=0;i<n;i++)
if(arr[i]<small)
{
small=arr[i];
}
}
printf("\n Smallest element=%d\n",small);
getchar();
}

/* o/p
user@user-ThinkCentre-M55e:~$ cd Desktop
user@user-ThinkCentre-M55e:~/Desktop$ gcc sm.c
user@user-ThinkCentre-M55e:~/Desktop$ ./a.out

 Enter the number of element:
5 7 8 5 56 1

 Smallest element=1
*/

