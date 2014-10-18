#include<stdio.h>
int main()
{
	int cash;
	float bal;

	scanf("%d%f", &cash ,&bal);

	if(cash%5==0)
	{
		if(bal>=cash+0.5)
		{
			bal = (bal - cash) - 0.5;

			printf("%.2f\n", bal);
		}

		else
			printf("%.2f\n", bal);
	}

	else
		printf("%.2f\n", bal);

	return 0;
}
