#include<stdio.h>
main()
{
	char ch;
		printf("Enter any charecter:");
		scanf("%c",&ch);
		switch(ch)
		{
			case 'a':printf("\nVowel");
			break;
			case 'e':printf("\nVowel");
			break;
			case 'i':printf("\nVowel");
			break;
			case 'o':printf("\nVowel");
			break;
			case 'u':printf("\nVowel");
			break;
			default:printf("consonant");
		}
}