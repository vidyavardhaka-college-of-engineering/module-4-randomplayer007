//Input: 10 20 
//Output: 30
#include<stdio.h>
struct sum
{
int a;
int b;
};
int main()
{
int sum1;
struct sum s;
printf("Enter two numbers:");
scanf("%d%d",&s.a,&s.b);
sum1=s.a+s.b;
printf("Sum=%d",sum1);
}

