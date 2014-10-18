#include<stdio.h>
main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i=2;i<=n;)
    {
        if(n%i==0)
        {
            printf("\n%d", i);
            n /= i;
            continue;
        }

        else
            i++;
    }
    return 0;
}
