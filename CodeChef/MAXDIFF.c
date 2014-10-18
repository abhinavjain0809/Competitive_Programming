#include<stdio.h>
main()
{
    int t, n, k, i, j, m, sum1, sum2, min, total;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &k);
        int a[n];
        total=0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            total += a[i];
        }
        sum1=0;
        for(i=0;i<k;i++)
        {
            min = a[0];
            for(j=0;j<n;j++)
                if(min>a[j])
                {
                    min = a[j];
                    m=j;
                }
            a[m] = 100001;
            sum1 += min;
        }
        sum2 = total - sum1;
      /*  if(sum2>sum1) */  printf("%d\n", sum2-sum1);
        /*else            printf("%d\n", sum1-sum2);*/
    }
    return 0;
}
