#include <stdio.h>
#include <string.h>
int sum[515];
int main()
{
    char s1[515],s2[515];
    int num1[515],num2[515],i,j,k,pos,yes;
   // freopen("in10106.txt","r",stdin);
    while (scanf("%s %s",&s1,&s2)==2){
    for(i=0;i<strlen(s1);i++)num1[i]=(int)s1[i]-48;
    for(i=0;i<strlen(s2);i++)num2[i]=(int)s2[i]-48;
    pos=510;
    for(i=strlen(s2)-1;i>=0;i--){
        pos=510;
        for(k=strlen(s2)-1;k>i;k--){
            sum[pos]=sum[pos]+0;
            pos--;
        }
      for(j=strlen(s1)-1;j>=0;j--){
        sum[pos]=sum[pos]+(num2[i]*num1[j]);
        if(sum[pos]>=10){
         sum[pos-1]=sum[pos-1]+sum[pos]/10;
         sum[pos]=sum[pos]%10;
        }
     pos--;

      }


    }
    yes=0;
    for(i=0;i<511;i++){
        if(sum[i]!=0){
          yes=1;
          break;
        }
    }
    if(yes==0)printf("0\n");
    else if(yes==1){
      for(j=i;j<511;j++){
          printf("%d",sum[j]);
          sum[j]=0;
      }
   printf("\n");
    }

    }
    return 0;
}
