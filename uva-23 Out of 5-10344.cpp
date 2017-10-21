#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

long long ara[10];
char str[10];
bool check[100];
vector<char>opera;
vector<long long>number;
vector<char>allchar[750];
long long olength,hoise;

void callo()
{
    long long i,j,k,l;
    if(opera.size()==4)
    {
        /*
        for(i=0;i<4;i++)
        printf("%c ",opera[i]);
        printf("\n");
        */
        for(i=0; i<4; i++)
            allchar[olength].push_back(opera[i]);
        olength++;
        return ;
    }
    for(i=0; i<4; i++)
    {
        if(check[i]==false)
        {
            check[i]=true;
            opera.push_back(str[i]);
            callo();
            check[i]=false;
            opera.pop_back();
        }
    }
}

void calln()
{
    long long i,j,k,l,m,n;
    if(number.size()==5)
    {
        for(i=0; i<olength; i++)
        {
            if(allchar[i][0]=='+')
            {
                k=number[0]+number[1];
            }
            if(allchar[i][0]=='*')
            {
                k=number[0]*number[1];
            }
            if(allchar[i][0]=='-')
            {
                k=number[0]-number[1];
            }
            if(allchar[i][1]=='+')
            {
                k=k+number[2];
            }
            if(allchar[i][1]=='-')
            {
                k=k-number[2];
            }
            if(allchar[i][1]=='*')
            {
                k=k*number[2];
            }
            if(allchar[i][2]=='+')
            {
                k=k+number[3];
            }
            if(allchar[i][2]=='-')
            {
                k=k-number[3];
            }
            if(allchar[i][2]=='*')
            {
                k=k*number[3];
            }
            if(allchar[i][3]=='+')
            {
                k=k+number[4];
            }
            if(allchar[i][3]=='-')
            {
                k=k-number[4];
            }
            if(allchar[i][3]=='*')
            {
                k=k*number[4];
            }
            if(k==23)
            {
                hoise=1;
                return ;
            }
            k=0;
        }
        return ;
    }
    for(i=0; i<5; i++)
    {
        if(hoise==1)
            return ;
        if(check[i]==false)
        {
            check[i]=true;
            number.push_back(ara[i]);
            calln();
            check[i]=false;
            number.pop_back();
        }
    }
}

int main()
{
    long long i,j,k,l,m,n;
    olength=0;
    for(i=0; i<15; i++)
    {
        if(i==0)
        {
            str[0]='+',str[1]='-',str[2]='*',str[3]='+',str[4]='\0';
        }
        if(i==1)
        {
            str[0]='+',str[1]='-',str[2]='*',str[3]='-',str[4]='\0';
        }
        if(i==2)
        {
            str[0]='+',str[1]='-',str[2]='*',str[3]='*',str[4]='\0';
        }
        if(i==3)
        {
            str[0]='+',str[1]='+',str[2]='-',str[3]='-',str[4]='\0';
        }
        if(i==4)
        {
            str[0]='+',str[1]='+',str[2]='*',str[3]='*',str[4]='\0';

        }
        if(i==5)
        {
            str[0]='+',str[1]='+',str[2]='+',str[3]='-',str[4]='\0';
        }
        if(i==6)
        {
            str[0]='+',str[1]='+',str[2]='+',str[3]='*',str[4]='\0';
        }
        if(i==7)
        {
            str[0]='+',str[1]='+',str[2]='+',str[3]='+',str[4]='\0';
        }
        if(i==8)
        {
            str[0]='-',str[1]='-',str[2]='*',str[3]='*',str[4]='\0';
        }
        if(i==9)
        {
            str[0]='-',str[1]='-',str[2]='-',str[3]='+',str[4]='\0';
        }
        if(i==10)
        {
            str[0]='-',str[1]='-',str[2]='-',str[3]='*',str[4]='\0';
        }
        if(i==11)
        {
            str[0]='-',str[1]='-',str[2]='-',str[3]='-',str[4]='\0';
        }
        if(i==12)
        {
            str[0]='*',str[1]='*',str[2]='*',str[3]='-',str[4]='\0';
        }
        if(i==13)
        {
            str[0]='*',str[1]='*',str[2]='*',str[3]='+',str[4]='\0';
        }
        if(i==14)
        {
            str[0]='*',str[1]='*',str[2]='*',str[3]='*',str[4]='\0';
        }

        memset(check,false,sizeof(check));
        callo();
        opera.clear();
    }
    //  printf("olength====%d\n",olength);
    /*
    for(i=0;i<72;i++)
    {
     printf("%lld %c %c %c %c\n",i+1,allchar[i][0],allchar[i][1],allchar[i][2],allchar[i][3]);
    }
    */
      while(scanf("%lld%lld%lld%lld%lld",&ara[0],&ara[1],&ara[2],&ara[3],&ara[4])==5)
    {
        if(ara[0]==0 && ara[1]==0 && ara[2]==0 && ara[3]==0 && ara[4]==0)
            return 0;
        memset(check,false,sizeof(check));
        hoise=0;
        calln();
        if(hoise==1)
            printf("Possible\n");
        else
            printf("Impossible\n");
        number.clear();
    }
}
