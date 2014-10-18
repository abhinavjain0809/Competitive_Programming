#include<stdio.h>
main()
{
    int t, r, c, n, temp1, temp2, max, a[110][110];
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(r=0;r<=n;r++)
            for(c=0;c<=n;c++)
                a[r][c] = 0;

        for(r=1;r<=n;r++)
            for(c=1;c<=r;c++)
                scanf("%d", &a[r][c]);

        for(r=1;r<=n;r++)
            for(c=1;c<=r;c++)
            {
                temp1 = a[r][c] + a[r-1][c];
                temp2 = a[r][c] + a[r-1][c-1];

                if(temp1>temp2)     a[r][c] = temp1;
                else    a[r][c] = temp2;
            }

        max = a[n][0];
        for(c=1;c<=n;c++)
            if(max<a[n][c])     max = a[n][c];

        printf("%d\n", max);
    }
    return 0;
}
