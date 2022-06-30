#include<stdio.h>  
main()    
{       
 	  int n,l,f,m,sum,t1;
      printf("Enter 7-Digit Number: ");
      scanf("%d",&n);
      f=n/100;
      t1=n%100;
      l=t1%10;
      m=t1/10;
      sum=l+m+f;
      printf("\nSum of All 7-Digits : %d",sum);
}   