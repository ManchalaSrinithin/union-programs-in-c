#include<stdio.h>
int area(int m);
int main()
{
	int m,ch;
	float z;
    printf("Enter 1 to calculate area of circle\n");
    printf("Enter 2 to calculate area of square\n");
    printf("Enter 3 to calculate area of sphere\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch(ch) 
	{
    	
	    case 1: 
		{
	     	z=c(m);
	        printf("Area of circle=%f",z);
	        break;
	    }
	    case 2: 
		{
	        z=squ(m);
	        printf("Area of square=%f",z);
	        break;
	    }
	    case 3: 
		{
	        z=sph(m);
	        printf("Area of sphere=%f",z);
	        break;
	    }
	}
	 return 0;
}
int c(m)
{
 		int result;
 	printf("Enter the radius:\n");
	scanf("%d",&m);
        result=3.14*m*m;
        return result;
}
int squ(m) 
	{
		int result;
		printf("Enter the side :\n");
		scanf("%d",&m);
        result=m*m;
         return result;
    }
int sph(m)
	{
		int result;
		printf("Enter the radius:\n");
		scanf("%d",&m);
        result=(float)4*(3.14*m*m);
         return result;
    }
