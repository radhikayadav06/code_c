/*Write a C program to read a character from keyboard and find whether it is a number, alphabet, or symbol./*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	printf("Alphabet");
	else if (ch>='0'&&ch<='9')
	printf("Digit");
	else
	printf("Special character");
	return 0;
}