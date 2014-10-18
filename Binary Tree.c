#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *left;
struct node *right;
}node;
node *temps;
int main()
{
int t,n,p;
int i,ts=0;
M:
printf("          MENU\n");
printf("******************************\n");
printf("* 1. Create a BST.           *\n");
printf("* 2. Display BST.            *\n");
printf("* 3. exit.                   *\n");
printf("******************************\n");
printf("Enter your choice : ");
scanf("%d",&t);
switch(t)
{
case 1:
{
printf("Enter number of nodes you want to Create. :");
scanf("%d",&n);

temps=(node *)malloc(sizeof(node));
printf("Enter Data: ");
scanf("%d",&temps->data);
temps->left=NULL;
temps->right=NULL;
printf("Root node is created.\n");
n=n-1;
while(n--)
{
node *temp1;
temp1=(node *)malloc(sizeof(node));
printf("Enter Next Data: ");
scanf("%d",&temp1->data);
temp1->left=NULL;
temp1->right=NULL;
node *temp;
temp=(node *)malloc(sizeof(node));
temp=temps;
//**********  Insertion  ***********//
p=1;
while(p==1)
{
if((temp1->data)<(temp->data))
{
if(temp->left==NULL)
{
temp->left=temp1;
p--;
printf("Assigned at left.\n");
}
else
temp=temp->left;
}// end of if.
else if((temp1->data)>(temp->data))
{
if(temp->right==NULL)
{
temp->right=temp1;
p--;
printf("Assigned at right.\n");
}
else
temp=temp->right;
}
}//end of while.
}//outer while close.
goto M;
break;
}
case 2:
{
display(temps);
goto M;
break;
}
case 3:
{
exit(0);
}
}//end of switch.
return 0;
}
display(node *temp)
{
if(temp->left!=NULL)
{
display(temp->left);
}
printf("%d  ",temp->data);
if(temp->right!=NULL)
{
display(temp->right);
}
}
