#include<stdio.h>
#include<string.h>
#include<vector>
#include<math.h>
using namespace std;

bool ccheck[15];
bool d1check[15];
bool d2check[15];
int all[100][12];
int length=0;
vector<int>row;
vector<int>coloum;

void nqueen(int n)
{
    int i;
    if(row.size()==8)
    {
        for(i=0; i<8; i++)
        {
        //  printf("%d %d\n",row[i],coloum[i]);
         // printf("%d %d\n",row[i],coloum[i]);
          all[length][coloum[i]]=row[i];
        }
        printf("\n");
        length++;
        return ;
    }
    for(i=1; i<=8; i++)
    {
        if(ccheck[i]==false && d1check[n+i]==false && d2check[n-i+8]==false)
        {
            ccheck[i]=d1check[n+i]=d2check[n-i+8]=true;
            row.push_back(n);
            coloum.push_back(i);
            nqueen(n+1);
            ccheck[i]=d1check[n+i]=d2check[n-i+8]=false;
            row.pop_back();
            coloum.pop_back();
        }
    }
}

int main()
{
    int ara[12];
    int i,j,k,l,m,n;
    int r1,r2,r3,r4,r5,r6,r7,r8;
    memset(ccheck, false,sizeof(ccheck));
    memset(d1check,false,sizeof(d1check));
    memset(d2check,false,sizeof(d2check));
    nqueen(1);
   // printf("%d\n",length);
   k=0;
   int kom=21474836;
   while(scanf("%d%d%d%d%d%d%d%d",&ara[1],&ara[2],&ara[3],&ara[4],&ara[5],&ara[6],&ara[7],&ara[8])!=EOF)
   {
    for(i=0;i<length;i++)
    {
     k=0;
     for(j=1;j<=8;j++)
     {
     // printf("ara %d all %d\n",ara[j],all[i][j]);
      k=k+fabs(ara[j]-all[i][j]);
     printf("%d %d\n",j,all[i][j]);
     }
     printf("\n");
     printf("k==%d\n",k);
     if(k<kom)
     kom=k;
    // printf("%d ",all[i][j]);
    // printf("\n\n");
    }
    printf("%d\n",kom);
   }
//   */
}
