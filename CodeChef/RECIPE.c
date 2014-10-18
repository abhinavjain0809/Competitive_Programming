#include<stdio.h>
main()
{
    int t, i, j, min, count, m, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int a[n];
        min=9999;
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            if(a[i]<min)    min = a[i];
        }

        for(i=1;i<=min;i++)
        {
            count=0;
            for(j=0;j<n;j++)
            {
                if(a[j]%i==0)   count++;
                else    break;
            }
            if(count==n)    m=i;
        }

        for(i=0;i<n;i++)
            printf("%d ", a[i]/m);
        printf("\n");
    }
    return 0;
}
