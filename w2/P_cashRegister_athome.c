/*
Name:      Gayeon Ko (Jessie)
Student#:  040 704 124
Section:   IPC144SUU
*/

// Paste your in-lab code below and upgrade it to the at-home specifications
#include <stdio.h>

int main() {
	double money, gst, total;
	int loonies, quarters, dimes, nickels, pennies;
	int cal;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &money);

	gst = money*.13 + 0.005;
	printf("GST: %1.2lf\n", gst);
	total = money + gst;
	printf("Balance owing: $%1.2lf\n", total);

	loonies = 0;
	quarters = 0;
	dimes = 0;
	nickels = 0;
	pennies = 0;

	while (total >= 1) {
		total--;
		loonies++;
	}
	printf("Loonies required: %d, balance owing $%1.2lf\n", loonies, total);

	cal = total * 100;

	if (cal >= 25) {
		quarters = cal / 25;
		cal = cal % 25;
	}

	while (cal >= 25) {
		quarters++;
		cal -= 25;
	}
	printf("Quarters required: %d, balance owing $%1.2f\n", quarters, (float)cal / 100);

	while (cal >= 10) {
		dimes++;
		cal -= 10;
	}
	printf("Dimes required: %d, balance owing $%1.2f\n", dimes, (float)cal / 100);

	while (cal >= 5) {
		nickels++;
		cal -= 5;
	}
	printf("Nickels required: %d, balance owing $%1.2f\n", nickels, (float)cal / 100);

	while (cal >= 1) {
		pennies++;
		cal -= 1;
	}
	printf("Pennies required: %d, balance owing $%1.2f\n", pennies, (float)cal / 100);

	return 0;
}