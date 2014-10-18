#include<stdio.h>
#include<math.h>
main()
{
    int n, i, j, l, m;
    double a, b, c, s, max, min;

    scanf("%d", &n);
    int t[n][6];
    double area[n];
    for(i=0;i<n;i++)
        for(j=0;j<6;j++)
            scanf("%d", &t[i][j]);

    for(i=0;i<n;i++)
    {
        a = sqrt(pow(t[i][2]-t[i][0],2) + pow(t[i][3]-t[i][1],2));
        b = sqrt(pow(t[i][4]-t[i][2],2) + pow(t[i][5]-t[i][3],2));
        c = sqrt(pow(t[i][4]-t[i][0],2) + pow(t[i][5]-t[i][1],2));

        s=(a+b+c)/2;
        area[i] = sqrt(s*(s-a)*(s-b)*(s-c));
    }

    min = area[0];
    l=0;
    max = area[0];
    m=0;
    for(i=0;i<n;i++)
    {
        if(min==area[i] && i>l)
        {
            min = area[i];
            l=i;
        }
        if(min>area[i])
        {
            min = area[i];
            l=i;
        }

        if(max==area[i] && i>m)
        {
            max = area[i];
            m=i;
        }
        if(max<area[i])
        {
            max = area[i];
            m=i;
        }
    }
    printf("%d %d\n", l+1, m+1);
    return 0;
}
