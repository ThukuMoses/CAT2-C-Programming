/*program to enter employees details
Author: Thuku Moses
Date 6/11/2024
*/
//preprocessor directive-scanf(),printf()
#include<stdio.h>
#include<string.h>
struct employee{
	char Name[25];
	int ID;
	char Department[20];
	float Salary;
	char Email[50];
}employee;
int main(){
	//input
	strcpy(employee.Name,"John Doe");
	employee.ID=12345;
	strcpy(employee.Department, "Human Resources");
	employee.Salary=55000.50;
	strcpy(employee.Email, "john.doe@company.com");
	//output
	printf("Name: %s\n", employee.Name);
	printf("ID: %d\n", employee.ID);
	printf("Department: %s\n", employee.Department);
	printf("Salary: %.2f\n", employee.Salary);	
	printf("Email: %s\n", employee.Email);
	
	return 0;
}
