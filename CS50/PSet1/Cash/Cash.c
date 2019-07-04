//****************************************************************
// 
// John Joshua Borrinaga
// CS50 - PSet1: Cash
// https://docs.cs50.net/2018/x/psets/1/cash/cash.html
//
// Calculates minimum number of coins 
// returned from a given change
// 
// Modified (02/07/2019):
// - Outputs total number of pennies, nickels, dimes and quarters
//
//****************************************************************

#include <stdio.h>

int main(void) {

	float change;

	do {
		printf("Enter amount of change due: $");
		scanf_s("%f", &change);
	} while (change <= 0);

	int roundedChange = change * 100;
	int quarters = roundedChange / 25;
	int dimes = (roundedChange % 25) / 10;
	int nickels = (roundedChange % 25 % 10) / 5;
	int pennies = (roundedChange % 25 % 10 % 5);

	printf("Quarters: %i\n", quarters);
	printf("Dimes: %i\n", dimes);
	printf("Nickels: %i\n", nickels);
	printf("Pennies: %i\n", pennies);
	printf("______________________\n");
	
	printf("Total Coins: %i", quarters + dimes + nickels + pennies);
}
