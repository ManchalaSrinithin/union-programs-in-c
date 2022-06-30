#include<stdio.h>
main()   
{    
	int i,j=1,n,x=0;    
	printf("Enter number of lines=");    
	scanf("%d",&n); 
	i=1;     
	while(i<=n)    
	{    
		while(x<3)
		{
		printf("\n%d",j++);
		x++;
	}
	i++;
		x=0;
		
	}
}