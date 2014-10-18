#include<stdio.h>
#include<math.h>
main()
{
    int t, n, a, b, x, i, count;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        i=1;
        count=0;
        while(i<sqrt(n))
        {
            if(n%i==0)
            {
                a=i;
                while(a>0)
                {
                    if(a%10==4 || a%10==7)
                    {
                        count++;
                        break;
                    }
                    a /= 10;
                }
                b=n/i;
                while(b>0)
                {
                    if(b%10==4 || b%10==7)
                    {
                        count++;
                        break;
                    }
                    b /= 10;
                }
            }

            if(i*i==n)
            {
                while(i>0)
                {
                    if(i%10==4 || i%10==7)
                    {
                        count++;
                        break;
                    }
                    i /= 10;
                }
            }
            i++;
        }
        printf("%d\n", count);
    }
    return 0;
}
