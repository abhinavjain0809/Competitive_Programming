#include<stdio.h>
#include<stdlib.h>
main()
{
    int i, j, n, t, k, max;
    typedef struct freq{
        int data;
        int count;
        struct freq *next;
    }N;
    N *new, *start=NULL, *ptr, *req;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int a[n];
        for(i=0;i<n;i++)    scanf("%d", &a[i]);

        start = NULL;
        for(i=0;i<n;i++)
        {
            k=a[i];
            if(k==0)    continue;
            else
            {
                new = (N*)malloc(sizeof(N));
                new->data=k;
                new->count=0;
                for(j=0;j<n;j++)
                    if(k==a[j]){
                        new->count += 1;
                        a[j]=0;
                    }
                if(start==NULL){
                    start=new;
                    new->next=NULL;
                }
                else{
                    new->next=start;
                    start=new;
                }
            }
        }
        ptr=start;
        max=ptr->count;
        req = (N*)malloc(sizeof(N));
        req->data=ptr->data;
        req->count=max;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            if(ptr->count==max && ptr->data<req->data)      req->data=ptr->data;

            if(ptr->count>max){
                max=ptr->count;
                req->data=ptr->data;
                req->count=max;
            }
        }
        printf("%d %d\n", req->data, req->count);
        free(start);
    }
    return 0;
}
