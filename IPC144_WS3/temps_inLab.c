// Name: Yunpeng Song
// Student Number: 155695174
// Email: ysong102
// Section: SZZ
// Workshop: 3_lab

#define _CRT_SECURE_NO_WARNINGS

#define NUMS 3	// define a constaint NUMS as 3
#include <stdio.h>
int main(void)
{
	int i;
	int day = 1;	// initializing the variable 
	int highTemp;
	int lowTemp;
	int totalHigh = 0;	// initializing the variable
	int totalLow = 0;	// initializing the variable
	double avg;
	printf("\n");
	printf("---=== IPC Temperature Analyzer ===---");
	for(i=0; i<NUMS; i++)	// for loop to execute the sequence until the condition is failed
	{
		printf("\nEnter the high value for day %d: ", day);
		scanf("%d", &highTemp);
		printf("\nEnter the low value for day %d: ", day);
		scanf("%d", &lowTemp);
		while (highTemp < lowTemp || highTemp >= 41 || lowTemp <= -41)	// nested while loop to provide checking condition
		{
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", day);
			scanf("%d", &highTemp);
			printf("\nEnter the low value for day %d: ", day);
			scanf("%d", &lowTemp);
		}
	day++;
	totalHigh += highTemp;	// get the total high temperatures
	totalLow += lowTemp;	// get the total low temperatures
	}	
	avg = (double)(totalHigh + totalLow) / (NUMS * 2);	// get the average temperature
	printf("\nThe average (mean) temperature was: %.2lf\n", avg); 
	return 0;
}
