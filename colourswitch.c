#include<stdio.h>
main()
{
	char ch;
	printf("Choose any option among rainbow colours: ");
	printf("o-orange");
	printf("\nv-violet");
	printf("\ni-indigo");
	printf("\nb-blue");
	printf("\ng-green");
	printf("\ny-yellow");
	printf("\nr-red");
	printf("\nEnter the colour:");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'o':
		printf("Orange colour");
		break;
		case 'v':
		printf("violet colour");
		break;
		case 'i':
		printf("Indigo colour");
		break;
		case 'b':
		printf("blue colour");
		break;
		case 'g':
		printf("green colour");
		break;
		case 'y':
		printf("yellow colour");
		break;
		case 'r':
		printf("red colour");
		break;
		default:
		printf(" choose the correct option");
		break;
		
	}
}