#include<stdio.h>
main()
{
    long int n, a[100], i, j, temp;
    int t;

    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld", &n);
        a[i-1]=n;
    }

    for(i=0;i<t-1;i++)
        for(j=i+1;j<t;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    for(i=0;i<t;i++)
        printf("%ld\n", a[i]);

    return 0;
}
