#include<stdio.h>
int cmp(const void*, const void*);
struct node
{
    int data;
    int freq;
}list[100000];
main()
{
    int n1, n2, n3, i, j, k, l, val, final[100000];

        scanf("%d%d%d", &n1, &n2, &n3);
        for(i=0;i<n1;i++)
        {
            scanf("%d", &list[i].data);
            list[i].freq=1;
        }
        for(i=0,j=0,l=n1;i<n2;i++)
        {
            scanf("%d", &val);
            while(j<n1 && list[j].data<val)     j++;
            if(list[j].data==val)   list[j].freq++;
            else
            {
                list[l].data=val;
                list[l].freq=1;
                l++;
            }
        }
        qsort(list, l, sizeof(struct node), cmp);
        for(i=0,j=0,k=0;i<n3;i++)
        {
            scanf("%d", &val);
            while(j<l && list[j].data<val)
            {
                if(list[j].freq>1)      final[k++]=list[j].data;
                j++;
            }
            if(list[j].data==val)
            {
                final[k++]=list[j].data;
                j++;
            }
        }

        while(j<l)
        {
            if(list[j].freq>1)  final[k++]=list[j].data;
            j++;
        }
        printf("%d\n", k);
        for(i=0;i<k;i++)    printf("%d\n", final[i]);
    return 0;
}

int cmp(const void *x, const void *y)
{
    return((*(struct node*)x).data-(*(struct node*)y).data);
}
