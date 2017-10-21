
// Source

/*
****************************************
Problem: Postfix to Infix conversion
****************************************
Ashis Kumar Chanda
ID:   1624
CSE,  DU
****************************************
****************************************
*/
//    Uva Problem: 727

// *, / sign have same precidence
// but greater precidence than +,-
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

#define Max 100
int pushnum,j;		// j is index of p_str
char p_str[Max];

int checkOperator(char p)
{
	if(p=='+' || p=='-')
		return 1;
	else if( p==42 || p==47)
		return 2;

return 0;
}

void pus( int push, int array[])
{
	int i,current, pre;

	while(1){
		current=checkOperator(push);
		pre=checkOperator(array[pushnum-1] );

	//	checking operator precidence
	if( (current ==1 && pre ==1) || (current ==1 && pre==2) ||(current==2 && pre ==2) )
	{
		p_str[j]=array[pushnum-1];
		j++;
		pushnum=pushnum-1;
	}
	else
		break;
	}

	for(i=0;i<Max;i++)
		if(i==pushnum)
			{
				array[i]=push;
				break;
			}
pushnum++;
}

void pop(int array[])
{
	int i;
	pushnum--;

	for(i=0;pushnum>=0;i++){
		if(array[pushnum]==40)// checking '('
			break;
		else
		{
			p_str[j]=array[pushnum];
			j++;
			pushnum--;
		}
	}

}

int main()
{
	char str[Max];

	gets(str);
	pushnum=0;		// gloval variable
	j=0;
	int i,array[Max]={0};

		for(i=0,j=0 ;str[i]!=NULL;i++){

		if(str[i]>='0' && str[i]<= '9')
		{
			p_str[j]=str[i];
			j++;
		}
		else if(str[i]==' ')
			continue;
		else if(str[i]=='+')
			pus(43,array);
		else if(str[i]=='-')
			pus(45,array);
		else if (str[i]==47)
			pus(47,array);
		else if(str[i]== '*')
			pus(42,array);
		else if(str[i]== '(')
			pus(40,array);
		else if(str[i]== ')')
			pop(array);
 	}

	pop(array);
	p_str[j]=NULL;

    printf("\nPostfix is : ");
	printf("%s\n",p_str);

return 0;
}

/*

input :

5*(6+2)-3
(2+3) *5+(3*4)
5*6+ ((4/2*3+6) (6+7*2) +3)+9

Output:
562+*3-
23+5*34*+
56*42/3 *6+672*++3++9+

*/


