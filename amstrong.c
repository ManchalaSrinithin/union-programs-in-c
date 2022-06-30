#include <stdio.h>
#include<math.h>
main() 
{
    int num,anum,rem,m=0;
    float r=0.0;
    printf("Enter a value: ");
    scanf("%d",&num);
    anum=num;
    if(anum=num)
    {
	    while(anum!=0) 
		{
	       	anum=anum/10;
	       	++m;
	    }
	}
	if(anum=num)
	{
		while(anum!=0)
		{
			anum=anum/10;
			rem=anum%10;
			r+= pow(rem,m);
		}
	    if ((int)r==num)
	    {
	        printf("%d is an Armstrong number.", num);
		}
	    else
	    {
	        printf("%d is not an Armstrong number.", num);
	    }
	}
}