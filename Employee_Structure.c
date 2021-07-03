#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
	int pnumber;
    int salary;
 
} Employee;
 
int main()
{
    int i, n;
    printf("Enter the no. of employees you want to register: ");
    scanf("%d",&n);
 
    Employee employees[n];
 
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //Age
        printf("Age: ");
        scanf("%d",&employees[i].age);
        
        //Phone no.
        printf("Phone no.: ");
        scanf("%d",&employees[i].pnumber);
        
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details

    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
         printf("Phone no. \t: ");
        printf("%d \n",employees[i].pnumber);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
