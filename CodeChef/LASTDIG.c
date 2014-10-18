#include<stdio.h>
main()
{
    int t, d, sum=0, sum1=0;
    long int a, b, x, k;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%ld%ld", &a, &b);
        x=a;
        sum1=0;
        while(x<=b)
        {
            k=x;
            sum=0;
            while(k!=0)
            {
                d = k%10;
                (d%2==1)?(sum += d):(sum += 2*d);
              /*  if(d%2==0)      sum += 2*d;
                else            sum += d;*/
                k /= 10;
                if(k==0)
                {
                    d = sum%10;
                    sum1 += d;
                }
            }
            x++;
        }
        printf("%d\n", sum1);
    }
    return 0;
}
