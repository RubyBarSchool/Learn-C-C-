#include<stdio.h>
#include<math.h>
int main()
{
	int numberOne,numberTwo,numberThree,addOne,addTwo,addThree,e;
	printf("You should import three integer number > 0 so check sides of triangle. \n");
	printf("You should import Number One: \n");
	scanf("%f",&numberOne);
	printf("You should import Number Two: \n");
	scanf("%f",&numberTwo);
	printf("You should import Number Three: \n");
	scanf("%f",&numberThree);
	addOne = numberOne + numberTwo;
	addTwo = numberTwo + numberThree;
	addThree = numberOne + numberThree;
	if(addOne > numberThree && addTwo > numberOne && addThree > numberTwo)
	{
		printf("Three number is three sides of triangle\nand\n");
		if(numberOne == numberTwo&&numberTwo == numberThree)
		{
			printf("Tam giac deu");
		}
		else if(numberOne*numberOne+numberTwo*numberTwo==numberThree*numberThree||numberTwo*numberTwo+numberThree*numberThree==numberOne*numberOne||numberOne*numberOne+numberThree*numberThree==numberTwo*numberTwo)
		{
			if(numberOne==numberTwo && numberOne!=numberThree||numberOne==numberThree && numberOne!=numberTwo||numberTwo==numberThree && numberTwo!=numberOne)
			{
				printf("Tam giac vuong can");
			}
			else
			{
				printf("Tam giac vuong thuong");
			}
		}
		else if(numberOne==numberTwo && numberOne!=numberThree||numberOne==numberThree && numberOne!=numberTwo||numberTwo==numberThree && numberTwo!=numberOne)
		{
			printf("Tam giac can");
		}	
		else if(numberOne!=numberTwo && numberOne!=numberThree && numberTwo!=numberThree)
		{
			printf("Tam giac thuong");
		}
	}
	else
	{
		printf("Three number is not three sides of triangle");
	}

	return 0;
}
