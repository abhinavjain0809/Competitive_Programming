#include<stdio.h>
main()
{
    int t, h1, m1, s1, h2, m2, s2, t1, t2, d, i, k, count;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d", &h1, &m1, &s1);
        scanf("%d%d%d", &h2, &m2, &s2);
        t1 = h1*3600 + m1*60 + s1;
        t2 = h2*3600 + m2*60 + s2;
        d = t2 - t1;
        if(d<0)
        {
            printf("S\n");
            exit(0);
        }

        i=0;
        k=1;
        count=0;
        while(1)
        {
            if(k==1)
            {
                i += 99;
                k=100;
            }
            else        i += 100;
            count++;
            if(i>=d)
            {
                if(count%2==1)      printf("S\n");
                else    printf("C\n");
                break;
            }
        }
    }
    return 0;
}
