# include <iostream>
# include <process.h>
# include <conio.h>
# include <malloc.h>
#include <bits/stdc++.h>
using namespace std;

int cur_link_list=1;
int display_menu();
struct link_list
{
 int no;
 struct link_list *next;
};

class link
{
 link_list *list;
 public:
       link_list *head;
       link()
       {
    list=NULL;
    head=NULL;
       }
       void get_list();
       void display_list();
       void insert();
       void delete_list();
       void sort();
       void merge(link_list *,link_list*);
       friend void union_list(link_list *,link_list *);
       friend void intersact(link_list *,link_list *);
       void reverse();
};

void link :: get_list()
{
  int no;
  list=head;
  while(list->next!=NULL)
  {
   list=list->next;
  }
  while(1)
  {
    cout<<"Enter Number :";
    cin>>no;
    if(no!=0)
    {
      if(list==NULL)
      {
       list=new link_list;
       head=list;
      }





      list->no=no;
      list->next = new link_list;
      list=list->next;
    }
    else
    {
     list->next=NULL;
     break;
    }
  }
}

void link :: display_list()
{
 list=head;
 cout<<endl;
 if (list==NULL)
 {
  cout<<"Link list is empty !!!";
  return;
 }
 while(list->next!=NULL)
 {
   cout<<list->no<<"\t";
   list=list->next;
 }
}

void link :: insert()
{
  int ch;
  list=head;
  cout<<endl;
  cout<<"[ 1 ] : Insert at First"<<endl;
  cout<<"[ 2 ] : Insert in Middle"<<endl;
  cout<<"[ 3 ] : Insert at Last"<<endl;
  cout<<"[ 4 ] : Back to main Menu"<<endl;
  cout<<"Enter your choice :";
  cin>>ch;
  link_list *newnode;
  newnode=new link_list;
  switch(ch)
  {
   case 1:
       cout<<"Enter Number :";
       cin>>newnode->no;
       list=head;
       if(list==NULL)
       {
        list=newnode;
        newnode->next=NULL;
        head=list;
       }
       else
       {
        newnode->next=list;
        head=newnode;
       }
       break;
   case 2: int no;
       cout<<endl;
       cout<<"Enter Number after which you want to insert :";
       cin>>no;
       list=head;






       while(list->next !=NULL)
       {
         if(list->no==no)
         {
           cout<<"Enter Number to Insert :";
           cin>>newnode->no;
           newnode->next=list->next;
           list->next=newnode;
           if(list==head)
           {
         head=newnode;
           }
           return;
         }
         list=list->next;
       }
       cout<<"Key not found ..."<<endl;
       break;
   case 3 : list=head;
        while(list->next!=NULL)
        {
         list=list->next;
        }
        cout<<"Enter Number :";
        cin>>newnode->no;

        if(head==NULL)
        {
         list=newnode;
         head=list;
        }
        else
        {
         list->next=newnode;
         newnode->next=NULL;
        }
        break;
  }
}

void link :: delete_list()
{
 cout<<endl;
 list=head;
 int no;
 cout<<"Enter the number to deleted :";
 cin>>no;
  if(head->no==no)
   {
    head=head->next;
    return;
   }

 while(list->next!=NULL)
 {
   if(list->next->no==no)
   {
     list->next=list->next->next;
     return;
   }
   list=list->next;
 }
 cout<<"Number not not found !!!";
}






void link :: sort()
{
 link_list *i,*j,*t;
 for(i=head;i->next!=NULL;i=i->next)
 {
  for(j=head;j->next!=NULL;j=j->next)
  {
   if(i->no < j->no)
   {
     t->no=i->no;
     i->no=j->no;
     j->no=t->no;
   }
  }
 }
}

void union_list(link_list *l1,link_list *l2)
{
  cout<<endl;
  link_list *h;
  h=l1;

  while(l1->next!=NULL)
  {
    cout<<l1->no<<"\t";
    l1=l1->next;
  }
 int flag=0;
  while(l2->next!=NULL)
  {
     l1=h;
     flag=0;
     while(l1->next!=NULL)
     {
      if(l1->no==l2->no)
      {
       flag=1;
       break;
      }
      l1=l1->next;
     }
     if(flag==0)
     {
       cout<<l2->no<<"\t";
     }
     l2=l2->next;
  }
}
void intersact (link_list *l1,link_list *l2)
{
 link_list *h;
 h=l2;
 while(l1->next!=NULL)
 {
   l2=h;
   while(l2->next!=NULL)
   {
     if(l1->no==l2->no)
     {
      cout<<l1->no<<"\t";
      break;
     }
     l2=l2->next;
   }





   l1=l1->next;
 }
}

void link :: reverse()
{
 int a[50];
 list=head;
 int i=0;
 while(list->next!=NULL)
 {
  a[i]=list->no;
  list=list->next;
  i=i+1;
 }
 int n=i-1;
 i=n;
 list=head;
 while(list->next!=NULL)
 {
  list->no=a[i];
  list=list->next;
  i=i-1;
 }
}

void link :: merge(link_list *l1,link_list *l2)
{
 head=NULL;
 list=new link_list;
 while(l1->next !=NULL)
 {
   if(head==NULL)
   {
    head=list;
   }
   list->no=l1->no;
   list->next=new link_list;
   list=list->next;
   l1=l1->next;
 }
 while(l2->next !=NULL)
 {
  list->no=l2->no;
  list->next=new link_list;
  list=list->next;
  list->next=NULL;
  l2=l2->next;
 }
 list->next=NULL;
}

int main()
{
// clrscr();
 link l1,l2,l3;
 while(1)
 {
  switch(display_menu())
  {
      case 1: cout<<"Enter LinkList Number [ 1 , 2 , 3 ]:";
          int n;
          cin>>n;
          if(n>=1 && n<=3)
          {
           cur_link_list=n;





          }
          break;
      case 2: switch(cur_link_list)
          {
           case 1: l1.get_list();
               break;
           case 2: l2.get_list();
               break;
           case 3: l3.get_list();
               break;
          }
          getch();
          break;

      case 3: switch(cur_link_list)
          {
        case 1 : l1.insert();
             break;
        case 2 : l2.insert();
             break;
        case 3 : l3.insert();
             break;
          }
          getch();
          break;
      case 4: switch(cur_link_list)
          {
        case 1: l1.display_list();
            break;
        case 2: l2.display_list();
            break;
        case 3: l3.display_list();
            break;
          }
          getch();
          break;
      case 5:
          switch(cur_link_list)
          {
           case 1: l1.display_list();
               l1.delete_list();
               break;

           case 2: l2.display_list();
               l2.delete_list();
               break;

           case 3: l3.display_list();
               l3.delete_list();
               break;
          }

          getch();
          break;
      case 6: cout<<endl;
          switch(cur_link_list)
          {
        case 1: l1.sort();
            l1.display_list();
            break;
        case 2: l2.sort();
            l2.display_list();
            break;
        case 3: l3.sort();
            l3.display_list();





            break;
          }
          cout<<endl<<endl<<"Linklist sorted !!!";
          getch();
          break;

      case 7: cout<<endl<<endl<<"Union of First two List..."<<endl;
          union_list(l1.head,l2.head);
          getch();
          break;
      case 8:cout<<endl<<endl<<"Intersaction of First two list..."<<endl;
         intersact(l1.head,l2.head);
         getch();
         break;
      case 9: switch(cur_link_list)
          {
           case 1: l1.reverse();
               break;
           case 2: l2.reverse();
               break;
           case 3: l3.reverse();
               break;
          }
          getch();
          break;
      case 10 : l3.merge(l1.head,l2.head);
        cout<<endl;
        cout<<"First two linklist merged in third link list !!!";
        l3.display_list();
        getch();
        break;
      case 11 : exit(1);

  }
 }

}

int display_menu()
{
 //clrscr();
 cout<<endl;
 cout<<" [ 01 ] Select Linklist (Selected List is:"<<cur_link_list<<")"<<endl;
 cout<<" [ 02 ] Get Elements"<<endl;
 cout<<" [ 03 ] Insert"<<endl;
 cout<<" [ 04 ] Display"<<endl;
 cout<<" [ 05 ] Delete"<<endl;
 cout<<" [ 06 ] Sort"<<endl;
 cout<<" [ 07 ] Union"<<endl;
 cout<<" [ 08 ] Intersaction"<<endl;
 cout<<" [ 09 ] Reverse"<<endl;
 cout<<" [ 10 ] Merge Linklist"<<endl;
 cout<<" [ 11 ] Exit"<<endl;
 cout<<" Enter your choice :";
 int ch;
 cin>>ch;
 return ch;
}

/*


Share:  00New

Previous Post:
Program to create a circular queue

Next Post:
Program to create a stack using dynamic memory allocation



Didn't find what you were looking for? Find more on Program of singly link list Or get search suggestion and latest updates.


Easy Tutor author of Program of singly link list is from United States. Easy Tutor says
Hello Friends,

I am Free Lance Tutor, who helped student in completing their homework.

I have 4 Years of hands on experience on helping student in completing their homework. I also guide them in doing their final year projects.

I have share many programs on this website for everyone to use freely, if you need further assistance, than please contact me on easytutor.2ya [at the rate] gmail [dot] com

I have special discount scheme for providing tutor services. I am providing tutor service to students from various contries, currently most of my students are from United States, India, Australia, Pakistan, Germany, UK and Canada.

I am also here to expand my technical network to receive more opportunity in my career, make friends to help them in resolving their technical problem, learn and share my knowledge, If you like to be my friend, Please send me friend request.

Thanks,
Happy Programming :)


View All Articles

Related Articles and Code:


Program to create a singly linked list of numbers using threads
Program of singly link list with different functionalities
Program to create a singly linked list of numbers using threads
Program to create a singly linked list of numbers using threads
Singly Linked list
Doubly circular link list or Circular doubly link list
Program to sort a linked list by readjusting the links
Singly Linked list with following operations INSERT AT STARTING, INSERT AT MIDDLE, INSERT AT END, DELETE FIRST NODE, DELETE LAST NODE, DELETE MIDDLE
Represent a polynomial in terms of a singly linked list and then add two three variables polynomials
Program to illustrate the implementation of Double Ended linked list as a StackProgram to illustrate the implementation of Double Ended linked list
Program to concatenate one linked list at end of another and than to erase all nodes present in the linked list
Program to find the number of nodes in the linked list using recursion
Program to compare two linked lists using recursion
Program to copy one linked list into another using recursion
Program to add a new node at the end of linked list using recursion
Program to add two polynomials maintained as linked lists
Program to multiply two polynomials maintained as linked lists
Program to maintain a linked list
Program to add a new node to the asscending order linked list
Program to merge two linked list, restricting commomn elements to occur only once

Other Interesting Articles in C++ Programming:


Program for converting int to class object
Program to illustrate the use of friend classes
Program that take font and background color and text input from a user and display it in right aligned
Program to show the implementation of Point Clipping Algorithm
The program illustrates the use of functions
Program for Fahrenheit to Celcius
Program to reverse the sequence of the words in the sentence and display the result
Program to convert an Infix Expression into a Postfix Expression using Linked List as a Stack
Program to show find the maximum depth of a Binary Search Tree
Program to illustrate the implementation of linked list as a Stack
Program to illustrate classes without using inline functions
Program to implement the Prim's Algorithm to solve Minimum Spanning Tree Problem (MST) using Graphics and with Mouse support
Program to show the projection of 3D objects using Orthographics Parallel Projection w.r.t. xy-plane and along vector v
Program to illustrate object initialization and assignment by default member wise copy
Program to print a string char by char using constant pointers to non-constant data
Program to interchange the values of two int , float and char using function overloading
Constructors and Destructor
Program to illustrate adding values to the contents of variables whose addresses are in pointers
Program to generate a pattern
Program to add two integers of any length

Please enter your Comment

Comment should be atleast 30 Characters.
Please put code inside [Code] your code [/Code].
*/
