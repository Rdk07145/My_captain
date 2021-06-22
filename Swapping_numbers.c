#include<stdio.h>  
#include<stdlib.h>

 int main()    
{    
int a, b; 
printf("Enter the first number: ");
scanf("%d" ,&a);    

printf("\nEnter the second number: ");
scanf("%d",&b); 

printf("\nBefore swapping\t a = %d\t b = %d",a,b);  
//for e.g let a=2 and b=5    
a=a+b;//a= 7 (2 + 5)    
b=a-b;//b= 2 (7 - 5)    
a=a-b;//a= 5 (7 - 2)    

//Hence numbers get swapped

printf("\nAfter swapping\t a = %d\t b = %d",a,b);    
return 0;  
}   
