//Input : 23  34 
//Output: Sum of feet = 57

//Program to add two distances (feet-inch)
#include <stdio.h>
struct Distance
{
    int feet;
} dist1, dist2, sum;

int main()
{
    printf("Enter feet  value for 1st and 2nd distance: ");
    scanf("%d%d", &dist1.feet, &dist2.feet);
    // adding feet
    sum.feet = dist1.feet + dist2.feet;
   

    printf("Sum of feet = ",sum.feet);//Enter the missing code
    return 0;
}
