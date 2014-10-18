#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL, *nu, *ptr;

main()
{
    int i, t, l, n, h1, h2, m, k, count;
    static int j;
    int *a, *city, *old, *current;
    scanf("%d", &t);
    while(t--)
    {
	   scanf("%d%d%d", &n, &h1, &h2);

    a = (int *)malloc((n-1)*sizeof(int));
    city = (int *)malloc((n-1)*sizeof(int));
    old = (int *)malloc(n*sizeof(int));
    current = (int *)malloc(n*sizeof(int));

    for(i=0;i<n-1;i++)
	   scanf("%d", &a[i]);

    for(i=0,j=0;i<n;)
    {
	   if(j==h1-1)  i++;
	   city[j++] = i+1;
	   i++;
    }

    nu = (struct node *)malloc(sizeof(struct node));
    if(nu==NULL)   exit(0);
    if(start==NULL)
    {
	   start = nu;
	   nu->data = h1;
	   nu->next = NULL;
    }

    // Present Order of Cities...
    nu = (struct node*)malloc(sizeof(struct node));
    count=0;
    for(i=0;i<n-1;i++)
    {
	   if(a[i]==h1 && count==0)
	   {
		  nu->data = city[i];
		  nu->next = start;
		  start = nu;
		  count++;
		  continue;
	   }
	   else if(a[i]==h1 && count==1)
	   {
		  ptr = start;
		  while(ptr->next!=NULL)  ptr=ptr->next;
		  ptr->next=nu;
		  nu->data=city[i];
		  nu->next=NULL;
	   }
    }
    for(i=0;i<n-1;i++)
    {
	   ptr=start;
	   if(a[i]==ptr->data)
	   {
		  nu = (struct node*)malloc(sizeof(struct node));
		  nu->data = city[i];
		  nu->next = start;
		  start = nu;
	   }
    }

    for(i=0;i<n-1;i++)
    {
	   ptr=start;
	   while(ptr->next!=NULL)  ptr=ptr->next;
	   if(a[i]==ptr->data)
	   {
		  ptr->next = nu;
		  nu->data = city[i];
		  nu->next = NULL;
	   }
    }

    // New Order of Cities...
    ptr=start;
    i=0;
    while(ptr->next!=NULL)   old[i++] = ptr->data;

    for(i=0;i<n;i++)
	   if(old[i]==h2)    m=i;

    j=0;
    l=1;
    while(l<=6)
    {
	for(i=0;i<n;i++)
	{
	   if(old[i]==h2)
		  continue;

	   else if(old[i]==l && i>m)
		  current[j++] = old[i-1];

	   else if(old[i]==l && i<m)
		  current[j++] = old[i+1];
	}
		l++;
    }

		for(i=0;i<n-1;i++)
			printf("%d ", current[i]);
    }
    return 0;
}