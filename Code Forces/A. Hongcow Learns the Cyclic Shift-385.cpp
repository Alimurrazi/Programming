#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int i,j,k,l,m,n,t;
    while(scanf("%s",str)==1)
    {
        int coun=1;
        char c,pc;
        char str1[100][100];
        strcpy(str1[0],str);
        m=1;
        l=strlen(str);
        for(j=1; j<=l; j++)
        {
            c=str[0];
            str[0]=str[l-1];
            for(i=1; i<l; i++)
            {
                pc=str[i];
                str[i]=c;
                c=pc;
            }
       //     printf("%s\n",str);
            for(k=0; k<m; k++)
            {
                if(strcmp(str1[k],str)==0)
                    break;
            }
            if(k==m)
            {
                strcpy(str1[m],str);
                m++;
            }
        }
        printf("%d\n",m);
    }
}
