#include<stdio.h>
void chamber(int, int []);
int n;
static long int a;
main()
{
    int k, l, i=0,j=0;

    scanf("%ld%d%d", &a, &n, &k);
    int part[k];
    for(l=0;l<k;l++)    part[l]=0;
    chamber(i,part);
    for(l=0;l<k;l++)    printf("%d ", part[l]);
    return 0;
}
void chamber(int i, int part[])
{
    int j;
    j=i+1;
    while(a!=0)
    {
        if(part[i]!=n)  part[i]++;
        else
        {
            part[i]=0;
            if(part[j]==n)  chamber(i+1,part);
            else    part[j]++;
        }
        a--;
    }
}
