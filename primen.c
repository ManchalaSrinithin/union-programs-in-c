#include<stdio.h>  
int main()  
{  
    int num,n,count=1,rem,sum; 
	printf("Enter a number of range 1 to");
	scanf("%d",n); 
  
    while(count<=n)  
    {  
        num=count;  
        sum=0;  
        while(num)  
        {  
            rem=num%10;  
            sum=sum+(rem*rem*rem);  
            num=num/10;  
        }  
  
        if(count==sum)  
        {  
            printf("%d is a Armstrong number\n", count);  
        }  
        count++;  
    }  
  
     return 0;  
}  