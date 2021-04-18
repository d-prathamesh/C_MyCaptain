#include<stdio.h>  
 int main()    
{    
int n1=19, n2=23;      
printf("Orignial number n1=%d n2=%d",n1,n2);      
n1=n1+n2;    
n2=n1-n2;
n1=n1-n2;   
printf("\nAfter swap n1=%d n2=%d",n1,n2);    
return 0;  
} 
