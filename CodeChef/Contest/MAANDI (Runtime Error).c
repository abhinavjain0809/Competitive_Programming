#include<stdio.h>
main()
{
    int t, m;
    long int i, j, n, l, count, temp4, temp7;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%ld", &n);
        i=4;
        count=0;
        temp4=0;
        while(i<=n)
        {
            if(n%i==0)      count++;
            i += 10;

            if(i>(temp4*100+40))
            {
                l = temp4*100+40;
                m=1;
                while(m<=10)
                {
                    if(m==5)    continue;
                    if(n%l==0)  count++;
                    l++;
                }
                temp4++;
            }
        }

        j=7;
        temp7=0;
        while(j<=n)
        {
            if(n%j==0)      count++;
            j += 10;

            if(j>(temp7*100+70))
            {
                l = temp7*100+70;
                m=1;
                while(m<=10)
                {
                    if(m==8)    continue;
                    if(n%l==0)  count++;
                    l++;
                }
                temp7++;
            }
        }
        printf("%ld\n", count);
    }
    return 0;
}
