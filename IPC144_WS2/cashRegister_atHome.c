/*
	 Name:      Yunpeng Song
	 Student#:  155695174
	 Email:     ysong102
	 Section:   SZZ
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	//declare the variables to store the values for the amount, gst and total balance 
	double aMount;
	double gst;
	double ttlBalance;
	//declare the variables to store the different type of coins
	int looNies;    
	int quarTers;
	int diMes;
	int niCkels;
	int peNnies;
	//declare the varialbes to store the balances
	double baLance1;
	int baLance2;
	int baLance3;
	int baLance4;
	int baLance5;

	printf("\n");
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &aMount);	// accept user's input
	gst = aMount * .13 + .005;	// make the gst round up to 1.13 to make the gst round up to two digits after the decimal point.
	ttlBalance = aMount + gst;	
	looNies = ttlBalance / 1;	// double value is be narrowed to int value and give the integer amount of loonies required
	baLance1 = ttlBalance - looNies;	
	quarTers = baLance1 * 100 / 25;	// double value is be narrowed to int value and give the integer amount of quarters required
	baLance2 = (int)(baLance1 * 100) % 25;	// casting the doulbe (balance1 * 100) to an integer in order to use the remaining operation to get the balance2
	diMes = baLance2 / 10;	// how many dimes needed
	baLance3 = baLance2 % 10;	// outstanding balance after dimes been paid
	niCkels = baLance3 / 5;	// how many nickles needed
	baLance4 = baLance3 % 5; 	// outstanding balance after nickels beed paid
	peNnies = baLance4 / 1;	// how many pennies needed
	baLance5 = baLance4 % 1;	// final outstanding balance 
	// output the record
	printf("GST: %.2lf\n", gst);
	printf("Balance owing: $%.2lf\n", ttlBalance);
	printf("Loonies required: %d, balance owing $%.2lf\n", looNies, baLance1);
	printf("Quarters required: %d, balance owing $%1.2lf\n", quarTers, (double)baLance2 / 100);
	printf("Dimes required: %d, balance owing $%1.2lf\n", diMes, (double)baLance3 / 100);
	printf("Nickels required: %d, balance owing $%1.2lf\n", niCkels, (double)baLance4 / 100);
	printf("Pennies required: %d, balance owing $%1.2lf\n", peNnies, (double)baLance5 / 100);
	return 0;
}
