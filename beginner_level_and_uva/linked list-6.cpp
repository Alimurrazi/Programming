#include<stdio.h>
#include<stdlib.h>

struct test
{
    int val;
    struct test *next;
};

struct test *head=NULL;
struct test *curr=NULL;

int create(int val)
{
    struct test *ptr=(struct test *)malloc(sizeof(struct test *));
    head=ptr;

    head->val=val;
    head->next=NULL;

    head=curr=ptr;
    return 0;
}

int add(int val)
{
    if(head==NULL)
    return create(val);
    struct test *ptr=(struct test *)malloc(sizeof(struct test*));
    ptr->val=val;
    ptr->next=NULL;

    curr->next=ptr;
    curr=ptr;
}

struct test *serch(int val,struct test **prev)
{
   struct test *ptr=head;
   struct test *temp=NULL;
   bool found=false;
   while(ptr!=NULL)
   {
    if(ptr->val==val)
    {
    found=true;
    break;
    }
    else
    temp=ptr;
    ptr=ptr->next;
   }

   if(found==true)
   {
   if(prev)
   {
    *prev=temp;
    return ptr;
   }
   printf("found\n");
   }
   else
   printf("not found\n");
};

int del(int val)
{
   int i,j;
   struct test *del=NULL;
   struct test *prev=NULL;

   del=serch(val,&prev);
   if(prev!=NULL)
     prev->next=del->next;
   if(del==head)
    head=head->next;
   if(del==curr)
    curr=prev;
    free(del);
    del=NULL;
 //  free(del);
  return 0;
}

void display()
{
    int i,j,k;
    struct test *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
     printf("%d\n",ptr->val);
     ptr=ptr->next;
    }
}

int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    add(i);
    display();
    serch(3,NULL);
    del(1);
    display();
}
