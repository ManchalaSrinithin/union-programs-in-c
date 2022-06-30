#include <stdio.h>
main()
{
    float result;
    int choice, num,num1;
    printf("Enter 1 to calculate area of circle\n");
    printf("Enter 2 to calculate area of square\n");
    printf("Enter 3 to calculate area of sphere\n");
    printf("Enter 4 to calculate area of square\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
      
    switch (choice) 
	{
    	
    case 1: 
	{
        printf("Enter radius:\n");
        scanf("%d",&num);
        result=3.14*num*num;
        printf("Area of sphere=%f",result);
        break;
    }
    case 2: 
	{
        printf("Enter side of square:\n");
        scanf("%d",&num);
        result=num*num;
        printf("Area of square=%f",result);
        break;
    }
    case 3: 
	{
        printf("Enter radius:\n");
        scanf("%d",&num);
        result=4*(3.14*num*num);
        printf("Area of sphere=%f",result);
        break;
    }
    case 4: 
	{
        printf("Enter length:\n");
        scanf("%d",&num);
        printf("Enter breadth:\n");
        scanf("%d",num1);
		result=num*num1;
        printf("Area of rectangle=%f",result);
        break;
    }

	}
}