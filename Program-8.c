//To compute the sum of all elements in an array using pointers

//Input: 5 2 3 4 5 6 
//Output:Sum=20

#include <stdio.h>
void main() 
{
   int arr1[10];
   int i,n, sum = 0;
   int *pt;
   printf(" Input the number of elements to store in the array (max 10) : ");
   scanf("%d",&n);
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i+1);
	  scanf("%d",&arr1[i]);
	  } 	
  pt = arr1; // pt store the base address of array arr1
  for (i = 0; i < n; i++) {
      // write the code to calculate sum
     
   }
  printf("Sum=%d",sum);
}
