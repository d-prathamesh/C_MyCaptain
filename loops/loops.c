#include <stdio.h>

int main()  {

   int n,i,j;
	n = 6;

   for(i=1;i<=6;i++)   {

       for(j=0;j<2*i;j++)

           printf("%d",j%2);

       printf("\n");

   }

   return 0;

}

