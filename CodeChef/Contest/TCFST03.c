#include<stdio.h>
#include<math.h>
main()
{
    int n, i, k, b, req=0;
    long long int sum=0, x, y, current, next, m;

    scanf("%d", &n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld", &a[i]);
        sum += pow(2,a[i]);
    }
    //printf("sum=%lld\n", sum);
    for(k=0;k<25;k++)
    {
        x = pow(2,k)-1;
        y = pow(2,k+1)-1;
        current = sum-x;
        next = sum-y;
        //printf("curr=%lld\tnxt=%lld\n", current, next);
        if(current==0 || next==0)
        {
            printf("0");
            break;
        }
        if(current>0 && next<0)
        {
            next *= -1;
            m = next;
            while(m!=0)
            {
                b = m%2;
                m /= 2;
                if(b==1)    req++;
            }
            printf("%d", req);
            break;
        }
    }
    return 0;
}
