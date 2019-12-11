//Expt No.8.1  Findout the largest element in array


#include<stdio.h>
void main()

{
  int i,n;
  int arr[100];

  printf("\n Enter total of(1 to 100):\n");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
{
  printf("Enter number %d:",i+1);
  scanf("%d",&arr[i]);
}
  for(i=0;i<n;i++)
{
  if (arr[0]<arr[i])
  arr[0]=arr[i];
}
  printf("largest element=%d\n",arr[0]);
  getchar();
}
/*  output:-

 Enter total of(1 to 100):
5

Enter number 1:6
Enter number 2:78
Enter number 3:45
Enter number 4:66
Enter number 5:34
largest element=78
		   */
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
