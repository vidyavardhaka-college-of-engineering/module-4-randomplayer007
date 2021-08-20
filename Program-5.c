// Program to retrieve book details
//Input: Pro-c 200 20 
//Output:Pro-c 200 20

#include<stdio.h> 
int main() 
{ 
    struct book 
    { 
       //declare name and price
        int pages; 
    }; 
    struct book b1;
     
    printf("Enter names, prices & no. of pages of 3 books"); 
    scanf("%s%d%d", &b1.name, &b1.price, &b1.pages);  
    printf("%s %d %d", b1.name, b1.price, b1.pages); 
     return 0;
} 
