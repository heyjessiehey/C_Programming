/* -------------------------------------------
Name: Jessie Gayeon Ko
Student number: 040 704 124
Email: gko4@myseneca.ca
Section: U
Date: Dec 5 2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:

void getName(struct Name * name) {
	char answer = 0;

	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName); //using arrow operator instead of dot operator
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &answer); // answer is one character required, better to use %c instead of %s

	if (answer == 'y' || answer == 'Y') { // Capital also available(case ignored)
		printf("Please enter the contact's middle initial(s): ");
		scanf("%30s", name->middleInitial); // upto 30 characters + NULL
		printf("Please enter the contact's last name: ");
		scanf("%30s", name->lastName);
	}
	else if (answer == 'n' || answer == 'N') {
		printf("Please enter the contact's last name: ");
		scanf("%30s", name->lastName);
	}
}
// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address * address){
	char answer = 0;

	printf("Please enter the contact's street number: ");
    scanf(" %d", &address->streetNumber);
    printf("Please enter the contact's street name: ");
    scanf("%40s", address->street); //upto 40 characters + NULL
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf(" %c", &answer);
    
    if (answer == 'y' || answer == 'Y') {
        printf("Please enter the contact's apartment number: ");
        scanf(" %d", &address->apartmentNumber); //unsigned integer
        printf("Please enter the contact's postal code: ");
    	scanf(" %8[^\n]", address->postalCode); // between the 3 digit postal code space needed
    	printf("Please enter the contact's city: ");
    	scanf("%40s", address->city);
    }
    else if (answer == 'n' || answer == 'N'){
    	printf("Please enter the contact's postal code: ");
    	scanf(" %8[^\n]", address->postalCode); // between the 3 digit postal code space needed
    	printf("Please enter the contact's city: ");
    	scanf("%40s", address->city);
    }

}

// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers * number){
	char answer = 0;

	printf("Do you want to enter a cell phone number? (y or n): ");
    scanf(" %c", &answer);

    if (answer == 'y' || answer == 'Y') {
        printf("Please enter the contact's cell phone number: ");
        scanf("%20s", number->cell); //upto 20 characters +NULL
        printf("Do you want to enter a home phone number? (y or n): ");
    	scanf(" %c", &answer);
    }
    else if (answer == 'n' || answer == 'N'){
    	printf("Do you want to enter a home phone number? (y or n): ");
    	scanf(" %c", &answer);
    }

    if (answer == 'y' || answer == 'Y') {
        printf("Please enter the contact's home phone number: ");
        scanf("%20s", number->home);
        printf("Do you want to enter a business phone number? (y or n): ");
    	scanf(" %c", &answer);
    }
    else if (answer == 'n' || answer == 'N'){
    	printf("Do you want to enter a business phone number? (y or n): ");
    	scanf(" %c", &answer);
    }

    if (answer == 'y' || answer == 'Y') {
        printf("Please enter the contact's business phone number: ");
        scanf("%20s", number->business);
    }
    
}

