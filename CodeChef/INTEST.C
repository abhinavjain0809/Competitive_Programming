#include<stdio.h>
int main()
{
	long int n, k, t, i, count=0;

	scanf("%ld%ld", &n, &k);

	for(i=1;i<=n;i++)
	{
		scanf("%ld", &t);

		if(t%k==0)
			count++;
	}

	printf("%ld", count);

	return 0;
}
