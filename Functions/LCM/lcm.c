#include<stdio.h>

int find_lcm(int, int);   // function prototype declaration

int main()
{
    int a, b, lcm;
    printf("Input first number:");
    scanf("%d", &a);
    printf("Input second number:");
    scanf("%d", &b);
    lcm = find_lcm(a,b);    // function call
    printf("\n\n LCM of %d and %d is: %d", a, b, lcm);
    return 0;
}

int find_lcm(int a, int b)  // function definition
{
    /*
        static variable is initialized only once 
        for each function call
    */
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
