#include<stdio.h>
#include<stdlib.h>
main()
{
    int t, i, m, k, *diff, *mod, *a, max, j=0;

    scanf("%d", &t);
    a = (int *)malloc((2*t)*sizeof(int));

    for(i=1;i<=t;i++)
    {
        scanf("%d%d", &a[j], &a[j+1]);
        j += 2;
    }

    for(i=0;i<(2*t);i+=2)
    {
        a[i+2] += a[i];
        a[i+3] += a[i+1];
    }

    diff = (int *)malloc(t*sizeof(int));
    k=0;
    for(i=0;i<(2*t);i+=2)
        diff[k++] = a[i]-a[i+1];

    mod = (int *)malloc(t*sizeof(int));
    for(i=0;i<t;i++)
        (diff[i]<0)?(mod[i]=-1*diff[i]):(mod[i]=diff[i]);

    max = mod[0];
    for(i=0;i<t;i++)
        if(max<mod[i])
        {
            max=mod[i];
            m=i;
        }

    if(diff[m]>0)
        printf("1 %d", max);

    else
        printf("2 %d", max);

    return 0;
}
