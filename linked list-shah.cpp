
/*
shahriar_sust13
*/
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#define MXN
#define MXE
#define SZE
#define HI printf("HI\n")
#define sf scanf
#define pf printf
#define pb push_back
#define ll long long int
#define ul unsigned long
#define ull unsigned long long
#define x first
#define y second
#define JURA pair<int, int>
using namespace std;

struct node{
    int value;
    node *next;
};

struct linkedlist{
    node *HEAD;
    linkedlist();
    void insertAtPos( int data, int pos );
    void display();
};

linkedlist::linkedlist(){
    node *init = new node;
    init->next = NULL;
    HEAD = init;
}

void linkedlist::insertAtPos( int data, int pos ){
    int i = 1;
    node *tmp = new node;
    tmp->value = data;

    if( pos == 1 ){
        tmp->next = HEAD;
        HEAD = tmp;
        return;
    }

    node *insert_tmp = HEAD;
    node *tmp2;

    while( insert_tmp->next != NULL ){
        i++;
        if( i == pos ){
            tmp2 = insert_tmp->next;
            tmp->next = tmp2;
            insert_tmp->next = tmp;
        }
        insert_tmp = insert_tmp->next;
    }
}

void linkedlist::display(){
    node *display_tmp = HEAD;
    if( display_tmp->next == NULL ){
        printf("SORRY NO ELEMENT INSERTED\n");
        return;
    }
    while( display_tmp->next != NULL ){
        printf("%d ", display_tmp->value);
        display_tmp = display_tmp->next;
    }
    printf("\n");
}

int main(){
    int n, num, pos, i, j;
    char str[100];
    linkedlist lnkl;

    while( scanf("%s", str) == 1 ){
        if( strcmp( str, "insert" ) == 0 ){
            scanf("%d %d", &num, &pos);
            lnkl.insertAtPos( num, pos );
        }
        else if( strcmp( str, "display" ) == 0 ){
            lnkl.display();
        }
    }
    lnkl.display();

    return 0;
}
