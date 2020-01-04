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
    struct test *ptr=(struct test*)malloc(sizeof(struct test*));
    ptr->val=val;
    ptr->next=NULL;

    head=curr=ptr;
    return 0;
}

int add(int val)
{
    if(head==NULL)
        return create(val);
    struct test *ptr=(struct test *)malloc(sizeof(struct test *));
    ptr->val=val;
    ptr->next=NULL;

    curr->next=ptr;
    curr=ptr;
}

void display()
{
    struct test *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->val);
        ptr=ptr->next;
    }
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
        if(prev)
        {
            *prev=temp;
            return ptr;
        }
        printf("found\n");
    }
    else
    {
        return NULL;
        printf("not found\n");
    }
};

int delet(int val)
{
    struct test *del=NULL;
    struct test *prev=NULL;

    del=serch(val,&prev);
    if(prev!=NULL)
        prev->next=del->next;
    if(del==head)
        head=del->next;
    if(del==curr)
        curr=prev;
    free(del);
    del=NULL;
    return 0;
}

int update(int val,int pos)
{
    struct test *new=(struct test*)malloc(struct test *);
    struct test *ptr=head;
    int i=0,temp,temp1;

    while(ptr!=NULL)
    {
     if(i==pos)
     {
      temp=ptr->val;
      ptr->val=val;
      ptr=ptr->next;
      temp1=ptr->val;
      ptr->val=temp;
     }
    // if(i!=pos)
     ptr=ptr->next;
    // if(i>pos)
     {
     ptr->val=temp1;
     }
     i++;
    }

}


int main()
{
    int i,j;
    for(i=5; i<=10; i++)
        add(i);
    display();
    serch(7,NULL);
    delet(10);
    display();
//    update(12,3);
    display();
}
