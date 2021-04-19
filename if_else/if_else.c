#include<stdio.h>
int main()
{
	int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Please enter marks from 0 to 100");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=40 && marks<54)
    {
        printf("Grade D");
    }
    else if(marks>=55 && marks<69)
    {
        printf("Grade C");
    }
    else if(marks>=70 && marks<84)
    {
        printf("Grade B");
    }
    else if(marks>=84 && marks<= 100)
    {
        printf("Grade A");
    }
    
		return 0;
}

