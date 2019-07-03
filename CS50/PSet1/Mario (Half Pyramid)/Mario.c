//****************************************************************
// 
// John Joshua Borrinaga
// CS50 - PSet1: Mario
// https://docs.cs50.net/2018/x/psets/1/mario/less/mario.html
//
// Recreate a rough representation of a half pyramid 
// from Super Mario Bros 1-1 with user input determining
// the height
//
//****************************************************************

#include <stdio.h>
#include <conio.h>
int main(void) {
	int height; 

	// Prompt user
	do {
		printf("Height: ");
		scanf_s(" %i", &height);
	} while (height <= 0 || height >= 23);


	for (int i = 0; i < height; i++)
	{
		// Add spaces
		for (int j = 0; j < height - i - 1; j++)
		{
			printf(" ");
		}

		// Add blocks
		for (int k = 0; k < i + 2; k++)
		{
			printf("#");
		}

		// Next Line after each blocks
		printf("\n");
	}


	
	_getch();
}
