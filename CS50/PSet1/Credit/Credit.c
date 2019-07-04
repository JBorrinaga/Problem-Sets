//****************************************************************
// 
// John Joshua Borrinaga
// CS50 - PSet1: Credit
// https://docs.cs50.net/2018/x/psets/1/credit/credit.html
//
// Validates a given credit card number using the Luhn Algorithm
// and outputs the credit card's provider
// 
//****************************************************************

#include <stdio.h>

int main(void) {
	// Input		
	long long ccNum;
	// Temp Copy of input
	long long tempNum;

	int temp,count, sum = 0;

	do {
		printf("Enter Credit Card Number: ");
		scanf_s("%lld", &ccNum);
	} while (ccNum < 0);

	for (tempNum = ccNum, count = 1; tempNum > 0; tempNum /= 10) {
		// Get last digit from input
		temp = tempNum % 10;

		// if every other number
		if (!(count % 2)) {			
			temp *= 2;	
			// if it became a two digit number
			if (temp > 9) {
				// add the two digits of a number
				temp = (temp % 10) + (temp / 10); 
			}
		}

		sum += temp;
		count++;
	}

	// Get first two digits
	while (ccNum > 99) {
		ccNum /= 10;
	}


	// if total modulo is congruent to 0
	if (!(sum % 10)) {
		if (ccNum >= 60) {
			printf("Discover");
		}
		else if (ccNum >= 51){
			printf("MasterCard");
		}
		else if (ccNum >= 40){
			printf("Visa");
		}
		else if (ccNum >= 37) {
			printf("American Express");
		}
		else if (ccNum >= 35) {
			printf("JCB");
		}
		else if (ccNum >= 30) {
			printf("Diners Club");
		}
		else if (ccNum >= 22) {
			printf("MasterCard");
		}
	}
	else {
		printf("Invalid!");
	}
	
}
