#include<stdio.h>
main()
{
    int t, n, i, b, steps, temp, x;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n ,&b);
        i=1;
        steps=0;
        while(i<=n)
        {
            steps += i;
            if(steps==b && i>1)
            {
                steps -= i;
                temp = x = steps;
                temp -= i-1;
                temp += i;
                temp += i+1;
                x += i+1;
                if(temp>x)  steps = temp;
                else        steps = x;
                i++;
            }
            else if(steps==b && i==1)    steps -= i;
            i++;
        }
        printf("%d\n", steps);
    }
    return 0;
}
