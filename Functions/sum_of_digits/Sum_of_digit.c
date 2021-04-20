#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, digitsum;
 
    printf("Input number: ");
    scanf("%d", &num);
    digitsum = sum(num);
    printf("Sum of digits :%d\n", digitsum);
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
