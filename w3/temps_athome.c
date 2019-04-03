// Name: Gayeon Ko (Jessie)
// Student Number: 040 704 124
// Email: gko4@myseneca.ca
// Section: IPC144SUU
// Workshop: workshop3 at_home
#include <stdio.h>
#define NUMS 4

int main() {
	int high[4], low[4], day, htemp = 0, ltemp = 0, hday = 0, lday = 0;
	float avg = 0, ttlhigh = 0, ttllow = 0;

	printf("---=== IPC Temperature Analyzer ===---\n");

	for (day = 0; day < NUMS; day++) {
		printf("Enter the high value for day %d: ", day + 1);
		scanf("%d", &high[day]);
		printf("\n");
		printf("Enter the low value for day %d: ", day + 1);
		scanf("%d", &low[day]);
		printf("\n");
		while (high[day] <= low[day] || high[day] >= 40 || low[day] <= -41) {
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");
			printf("Enter the high value for day %d: ", day + 1);
			scanf("%d", &high[day]);
			printf("\n");
			printf("Enter the low value for day %d: ", day + 1);
			scanf("%d", &low[day]);
			printf("\n");
		}
		ttlhigh += high[day];
		ttllow += low[day];
	}
	htemp = high[0];
	ltemp = low[0];
	for (day = 0; day < NUMS; day++) {
		if (high[day] > htemp) {
			htemp = high[day];
			hday = day;
		}
		if (low[day] < ltemp) {
			ltemp = low[day];
			lday = day;
		}
	}
	avg = ((ttlhigh + ttllow) / 8);
	printf("The average (mean) temperature was: %1.2f\n", avg);
	printf("The highest temperature was %d, on day %d\n", htemp, hday + 1);
	printf("The lowest temperature was %d, on day %d\n", ltemp, lday + 1);
	return 0;
}
