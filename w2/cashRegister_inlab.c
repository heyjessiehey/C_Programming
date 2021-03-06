/*
Name:      Gayeon Ko (Jessie)
Student#:  040 704 124
Section:   IPC144SUU
*/

// Start your code below:

#include <stdio.h>

int main() {
	double money;
	int loonies, quarters;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &money);

	loonies = 0;
	quarters = 0;

	while (money >= 1) {
		money--;
		loonies++;
	}
	printf("Loonies required: %d, balance owing $%1.2lf\n", loonies, money);

	while (money >= 0.25) {
		quarters++;
		money -= 0.25;
	}
	printf("Quarters required: %d, balance owing $%1.2lf\n", quarters, money);

	return 0;
}