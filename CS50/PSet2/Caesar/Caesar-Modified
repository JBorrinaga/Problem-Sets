//****************************************************************
// 
// John Joshua Borrinaga
// CS50 - PSet2: Caesar (Modified)
// https://docs.cs50.net/2018/x/psets/2/caesar/caesar.html
// 
// Prompts user for key and encrypt a message 
// using Caesar Cipher algorithm
//
//****************************************************************

#include <stdio.h>
#include <string.h>

int main() {

	char plainText[256] = { NULL };

	// number of alphabets
	const int range = 26;

	int key;
	int index = 1;
	int i, n, j = 0;

	printf("Key: ");
	scanf_s("%i", &key);

	if (key < 0) {
		printf("Error!");
		return 1;
	}
	
	printf("Plain Text: ");
	scanf_s("%s", plainText, __crt_countof(plainText));

	printf("Encrypted Text: ");

	for (i = 0, n = strlen(plainText); i < n; i++) {

			if (plainText[i] >= 'a') {
				printf("%c", (plainText[i] + key - 'a') % range + 'a');
			}
			else if(plainText[i] >= 'A')
			{
				printf("%c", (plainText[i] + key - 'A') % range + 'A');
			}
			else {
				printf("%c", plainText[i]);
			}
		
	}

	_getch();
}
