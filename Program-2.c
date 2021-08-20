// Program to add information of student and display marks

//Input: 10 20 30
 //Output: 10 20 30
#include<stdio.h>  
struct student  
{  //char name[10];
    //int id;
    int marks;  
};  
int main()  
{  
  struct student s1,s2,s3;  
  printf("Enter the  marks of student 1,2 and 3");  
// Read the marks of three students
 
   printf("%d %d %d",s1.marks,s2.marks,s3.marks); 
  return 0;
}  
