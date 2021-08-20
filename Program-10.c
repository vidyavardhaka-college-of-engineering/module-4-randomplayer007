//To store n elements in an array and print the elements using pointer.
// Input : 5 4 6 1 7 3       
// Output: 4 6 1 7 3                                                                                                     
#include <stdio.h>
int main()
{
   int arr1[25], i,n,*ptr;
   printf("Input the number of elements to store in the array and the elements:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      {
	   scanf(" %d",&arr1[i]);
	  }
    ptr=&arr1;
   printf("The elements you entered are : ");
   for(i=0;i<n;i++)
      {
	      printf("%d ",ptr[i]);
	  }
	   return 0;
}
