#include<stdio.h>
main()
{
    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        if(n%2==1)  printf("%d\n", n-1);
        else        printf("%d\n", n);
    }
    return 0;
}
