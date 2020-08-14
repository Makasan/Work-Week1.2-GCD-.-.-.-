#include<stdio.h>
/*
	Find Greatest Common Divisor from 2 data.
	num1 = Data1
	num2 = Data2
	GCD  = Greatest Common Divisor
*/
int main()
{
	int num1, num2;
	int GCD = 1;
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2 and num1 >= 0 and num2 >= 0)
	{
		for (int i = 1; i <= num1; i++)
		{
			if (num1 % i == 0 and num2 % i == 0)
			{
				GCD *= i;
				num1 /= i;
				num2 /= i;
				i = 1;
			}
		}
	}
	else if (num2 > num1 and num1 >= 0 and num2 >= 0)
	{
		for (int i = 1; i <= num2; i++)
		{
			if (num1 % i == 0 and num2 % i == 0)
			{
				GCD *= i;
				num1 /= i;
				num2 /= i;
				i = 1;
			}
		}
	}
	else if (num2 < 0 or num1 < 0)
	{
		printf("Error");
		return 0;
	}
	else if (num1 == num2)
	{
		GCD = num1;
	}
	printf("GCD is = %d", GCD);

	return 0;
}