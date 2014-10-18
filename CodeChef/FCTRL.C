#include<stdio.h>
main()
{
	long int t, n, count, i, p;

	scanf("%ld", &t);

	for(i=1;i<=t;i++)
	{
		scanf("%ld", &n);

		count=0;

		if(n==0)
			printf("%ld", count);

		while(n!=0)
		{
			p = n/5;
			n = n/5;
			count += p;
		}

		printf("%ld\n", count);
	}
	return 0;
}
