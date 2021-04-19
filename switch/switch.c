#include<stdio.h>
int main()
{
	//Menu
	printf("Choose anyone from the menu:\n1. Pizza,Rs 239\n2. burger, Rs 129\n3. Pasta , Rs 179\n4. French Fries, Rs 99\n5. Sandwitch, Rs 149\n\n");
	//input
	int items;
	printf("Enter number:%d",items);
	scanf("%d",&items);
	//display output
	switch(items)
	{
		case 1:
			printf("Food Item- Pizza\nPrice- Rs239\n");
			break;
		case 2:
			printf("Food Item- Burger\nPrice- Rs129\n");
			break;
		case 3:
			printf("Food Item- Pasta\nPrice- Rs179\n");
			break;
		case 4:
			printf("Food Item- Frech Fries\nPrice- Rs99\n");
			break;
		case 5:
			printf("Food Item- Sandwitch\nPrice- Rs149\n");
			break;
		default:
			printf("[Please enter the number from 1 - 5]");
	}
	return 0;
}
