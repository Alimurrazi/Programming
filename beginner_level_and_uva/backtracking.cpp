#include<stdio.h>
#include<vector>
using namespace std;

char arr[]= {'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a'};
vector<char>result;
int taken[40]= {0};

void call()
{
    if(result.size()==5)
    {
        for(int i=0; i<5; i++)
            printf("%c",result[i]);
        printf("\n");
        return;
    }

    for(int i=0; i<30; i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            result.push_back(arr[i]);
            call();
            taken[i]=0;
            result.pop_back();
        }
    }

}

int main()
{
    int i;
//    for(i=0;i<15;i++)
//    printf("%d\n",taken[i]);
    call();
}
