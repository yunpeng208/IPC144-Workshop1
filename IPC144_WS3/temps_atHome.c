// Name: Yunpeng Song
// Student Number: 155695174
// Email: ysong102
// Section: SZZ
// Workshop: 3_home

#define _CRT_SECURE_NO_WARNINGS

#define NUMS 4	// change the NUMS to 4 days
#include <stdio.h>
int main(void)
{
	int i;
	int day = 1;	// initializing variable
	int highTemp;
	int lowTemp;
	int maxTemp;
	int minTemp;
	int maxDay;
	int minDay;
	int totalHigh = 0;	// initializing variable
	int totalLow = 0;	// initializing variable
	double avg;
	maxTemp = lowTemp;	// used for compare the temperature
	minTemp = highTemp;	// used for compare the temperature
	printf("\n");
	printf("---=== IPC Temperature Analyzer ===---");
	for(i=0; i<NUMS; i++)
	{
		printf("\nEnter the high value for day %d: ", day);
		scanf("%d", &highTemp);
		printf("\nEnter the low value for day %d: ", day);
		scanf("%d", &lowTemp);
		while(highTemp < lowTemp || highTemp >= 41 || lowTemp <= -41)	// nested while loop
		{
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", day);
			scanf("%d", &highTemp);
			printf("\nEnter the low value for day %d: ", day);
			scanf("%d", &lowTemp);
		}
		if(highTemp > maxTemp)	// compare the high temperature to get the highest temperature and the corresponding day
		{
			maxTemp = highTemp;
			maxDay = day;
		}
		if(lowTemp < minTemp)	// compare the low temperature to get the lowest temperature and the corresponding day
		{
			minTemp = lowTemp;
			minDay = day;
		}
	day++;
	totalHigh += highTemp;	// get the total of high temperature
	totalLow += lowTemp;	// get the total of low temperature
	}	
	avg = (double)(totalHigh + totalLow) / (NUMS * 2);
	printf("\nThe average (mean) temperature was: %.2lf\n", avg);
	printf("The highest temperature was %d, on day %d\n", maxTemp, maxDay);
	printf("The lowest temperature was %d, on day %d\n", minTemp, minDay); 
	return 0;
}
