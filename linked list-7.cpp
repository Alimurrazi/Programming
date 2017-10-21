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
    struct test *ptr=(struct test *)malloc(sizeof(struct test));
    ptr->val=val;
    ptr->next=NULL;

    head=curr=ptr;
    return 0;
}

int add(int val)
{
    if(head==NULL)
    {
        create(val);
        return 0;
    }
    struct test *ptr=(struct test *)malloc(sizeof(struct test));
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
        {
            temp=ptr;
            ptr=ptr->next;
        }
    }
    if(found==true)
    {
        *prev=temp;
        return ptr;
    }
    else
        return NULL;
};

int delet(int val)
{
    struct test *prev=NULL;
    struct test *del=NULL;
    del=serch(val,&prev);
    if(prev!=NULL)
        prev->next=del->next;
    free(del);
    return 0;
}

void display()
{
    struct test *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->val);
        ptr=ptr->next;
    }
    return ;
}

int main()
{
    int i,j,k,l;
    for(i=1; i<=5; i++)
        add(i);
    display();
    delet(3);
    display();
}
