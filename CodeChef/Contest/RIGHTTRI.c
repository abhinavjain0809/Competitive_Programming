#include<stdio.h>
#include<math.h>
main()
{
    int i, count=0;
    long int n;
    int x1, y1, x2, y2, x3, y3;
    float d1, d2, d3, a, b, c;

    scanf("%ld", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);

        a = pow(x1-x2,2) + pow(y1-y2,2);
        b = pow(x2-x3,2) + pow(y2-y3,2);
        c = pow(x3-x1,2) + pow(y3-y1,2);

        if(a+b==c || b+c==a || a+c==b)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
