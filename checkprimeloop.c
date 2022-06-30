#include<stdio.h>   
main()  
{  
    int i,m=2,n=1,n1;  
    printf("Enter a number\n");  
    scanf("%d", &i); 
	printf("Enter range"); 
  
    while(m<i)  
    {  
        if(i%m==0)  
        {  
            n=0;  
            break;  
        }  
        m++;  
    }  
  
    if(n) 
    {
	printf("%d is prime number\n", i);  
	}	
    else
	{
    printf("%d is not prime number\n",i);  
	}	
  

}  