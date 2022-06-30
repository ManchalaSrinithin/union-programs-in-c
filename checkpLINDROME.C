#include<stdio.h>
main()   
{    
	int m,n,rem,sum=0;    
	printf("Enter any value=");    
	scanf("%d",&n);    
	m=n;    
	while(n>0)    
	{    
	rem=n%10;    
	sum=(sum*10)+rem;    
	n=n/10;    
	}    
	if(m==sum)    
	printf("It is a palindrome number ");    
	else    
	printf("It is not a palindrome");   
}
    