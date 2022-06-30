#include<stdio.h>
main() 
{
    int n,i=1,sum = 0;
    float avg;
    printf("Enter any value: ");
    scanf("%d", &n);
    while (i <= n) 
	{
        sum += i;
        ++i;
    }
	printf("Sum = %d", sum);
	avg=(float)sum/n;
	printf("\naverage of first %d=%f",n,avg);
}