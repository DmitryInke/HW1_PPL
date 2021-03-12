#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "q3.h"
void q3()
{
	int num1;
	printf("Please enter a first number \n");
	scanf("%d", &num1);
	int num2;
	printf("Please enter a second number\n");
	scanf("%d", &num2);
	char ch;
	printf("Please enter a symbol < or > \n");
	getchar();
	scanf("%c", &ch);
	int result = getTrueAnswer(num1, num2, ch);
	printf("Result is: %d", result);
	puts("");
}

int getTrueAnswer(int num1, int num2, char symbol)
{
	while (((symbol == '>') && ((num1 > num2))) || ((symbol == '<') && ((num1 < num2))))
		return num1;
	while (((symbol == '>') && ((num2 > num1))) || ((symbol == '<') && ((num2 < num1))))
		return num2;

	return -1; // incorrect input

}