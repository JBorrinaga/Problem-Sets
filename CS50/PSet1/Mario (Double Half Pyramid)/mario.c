//****************************************************************
// 
// John Joshua Borrinaga
// CS50 - PSet1: Mario (Alt) 
// https://docs.cs50.net/2018/x/psets/1/mario/more/mario.html
//
// Recreate a rough representation of the double half-pyramid in
// from Super Mario Bros 1-1 with user input determining
// the height
//
//****************************************************************

#include <stdio.h>

int main(void) {
	int height;
	int leftSpace, leftBlock, rightBlock;
	// Prompt user
	do {
		printf("Height: ");
		scanf_s(" %i", &height);
	} while (height <= 0 || height >= 23);


	for (int i = 0; i < height; i++)
	{
		// Left Side
		// Add spaces 
		for ( leftSpace = 0; leftSpace  < height - i - 1; leftSpace++)
		{
			printf(" ");
		}

		// Add blocks
		printf(" ");
		for ( leftBlock = 0; leftBlock <= i ; leftBlock++)
		{
			printf("#");
		}

		// Space In-Between
		printf(" ");

		// Right Side
		// Add Blocks
		for ( rightBlock= 0; rightBlock <= i; rightBlock++)
		{
			printf("#");
		}
	
		printf("\n");
	}

}
