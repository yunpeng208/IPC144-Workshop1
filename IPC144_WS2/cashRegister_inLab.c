/*
 Name: 		Yunpeng Song
 Student#: 	155695174
 Email: 	ysong102@myseneca.ca
 Section: 	SZZ
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	double amount;
	int looNies;
	int quarTers;
	double baLance1;
	double baLance2;
	printf("\n");
	printf("Please enter the amount to be paid: $");	
	scanf("%lf", &amount); 		// read the user's input
	looNies = amount / 1;		// Narrowing needed to delete the decimal part and get an integer amount of loonies
	baLance1 = amount - looNies;	// balance owing after loonies are paid
	quarTers = baLance1 / 0.25;	// Narrowing needed to get an integer amount of quarters
	baLance2 = baLance1 - quarTers * 0.25;	// final balance owing 
	printf("Loonies required: %d, balance owing $%.2lf\n", looNies, baLance1);
	printf("Quarters required: %d, balance owing $%.2lf\n", quarTers, baLance2);
	return 0;
}
