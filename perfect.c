#include<stdio.h>   
main()   
{   
 int i=1,n,Sum=0;   
 printf("Enter any number:");   
 scanf("%d",&n);   
  while(i<n) 
  {   
   if(n%i==0)   
	Sum=Sum+i;
	i++;   
  }    
 if(Sum==n)   
    printf("\nit is a Perfect Number");   
 else   
    printf("\nit is not the Perfect Number");     
}
