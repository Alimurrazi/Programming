#include<stdio.h>
#include<stdlib.h>

struct test
{
    int val;
    struct test *next;
};

struct test *head=NULL;
struct test *curr=NULL;

struct test *create(int val)
{
    struct test *ptr=(struct test*)malloc(sizeof(struct test));
    ptr->val=val;
    ptr->next=NULL;

    head=curr=ptr;
    return 0;
};

struct test *add_list(int val)
{
    if(head==NULL)
        return (create(val));

    struct test *ptr=(struct test*)malloc(sizeof(struct test*));
//   printf("ptr=%d\n",ptr);
    ptr->val=val;
    //  printf("ptr-next==%d\n",ptr->next);
    ptr->next=NULL;

    curr->next=ptr;
    curr=ptr;

    return 0;
};

struct test* serch(int val,struct test **prev)
{
    struct test *ptr=head;
    struct test *temp=NULL;
    bool found=false;

    while(ptr!=NULL)
    {
  //      printf("search=%d\n",ptr->val);
        if(ptr->val==val)
        {
            found=true;
            break;
        }
        else
        {
            temp=ptr;
            ptr=ptr->next;
        }
    }
    if(found==true)
    {
   //     printf("****%d\n",prev);

        if(prev)
        {
   //         printf("----%d\n",prev);
            *prev = temp;
        }
        return ptr;
    }
    else
        return NULL;
}

int delet(int val)
{
    struct test *prev=NULL;
    struct test *del=NULL;

    del=serch(val,&prev);
    if(del==NULL)
        return -1;
    else
    {
        if(prev!=NULL)
            prev->next=del->next;
        if(del==curr)
            curr=prev;
        else if(del==head)
            head=del->next;
    }
    free(del);
    del=NULL;
    return 0;
}

void print_list()
{
    struct test *ptr=head;
    while(ptr!=NULL)
    {
   //     printf("ptr=%d\n",ptr);
   //     printf("%d\n",ptr->val);
   //     printf("%d\n",ptr->next);
        ptr=ptr->next;
    }
    return ;
}

int main()
{
    int i=0,ret=0;
    struct test *ptr=NULL;

    for(i=5; i<=10; i++)
        add_list(i);
    print_list();
    for(i=5; i<=11; i++)
    {
        ptr=serch(i,NULL);
        if(ptr==NULL)
            printf("Not found\n");
        else
            printf("found\n");
    }
    delet(7);
    delet(8);
    print_list();
}
