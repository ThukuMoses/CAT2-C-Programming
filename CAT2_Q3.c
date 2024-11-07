/*program to calculate grosspay, netpay and taxes
Author: Thuku Moses
Date 6/11/2024
*/
//preprocessor directive-scanf(),printf()
#include<stdio.h>
int main(){
	double hours_worked, hourly_wage, normal_hours, overtime_hours;
	double gross_pay, taxes, net_pay;
	
	printf("Enter the number of hours at work in a week: ");
	scanf("%lf",&hours_worked);
	printf("Enter the hourly wage: ");
	scanf("%lf",&hourly_wage);
	
	if (hours_worked<=40){
		normal_hours=hours_worked;
		overtime_hours=0;
	}
	else{
		normal_hours=40;
		overtime_hours=(hours_worked-40);
	}

	gross_pay=(normal_hours*hourly_wage)+(overtime_hours*(1.5*hourly_wage));
	if(gross_pay<=600){
		taxes=(gross_pay*0.15);
	}
	else{
		taxes=((gross_pay-600)*0.20)+(600*0.15);
	}
	net_pay=gross_pay-taxes;
	
	//output
	printf("Gross pay is: $%.2lf", gross_pay);
	printf("\nThe taxes are: $%.2lf", taxes);
	printf("\nNet pay is: $%.2lf", net_pay);

	return 0;
}