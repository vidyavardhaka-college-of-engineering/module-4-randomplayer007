// To print the value of a variable using pointers

// Input:5                                                                                 
 //  Output:value=5


#include <stdio.h>
int main()
{
  int var,*ptr;
//Initialize the pointer variable
  printf("Enter the value:");
  scanf("%d",&var);
  printf("value=%d",*ptr);
  return 0;
}
