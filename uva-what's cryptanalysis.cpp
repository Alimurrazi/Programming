#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct word
{
  char so;
  int coun;
};
int main()
{
  int ara[30];
  struct word crypt[10000];
  char str1[10000];
  int length,il,jl,kl,t,i,j;
  scanf("%d%*c",&t);
  for(il=0;il<26;il++)
     ara[il]=0;
 while(t--)
  {
    gets(str1);
    length=strlen(str1);
    for(il=0;il<length;il++)
    {
     if(str1[il]=='a'||str1[il]=='A')
       ara[0]++;
       if(str1[il]=='b'||str1[il]=='B')
       ara[1]++;
       if(str1[il]=='c'||str1[il]=='C')
        ara[2]++;
         if(str1[il]=='d'||str1[il]=='D')
        ara[3]++;
         if(str1[il]=='e'||str1[il]=='E')
        ara[4]++;
         if(str1[il]=='f'||str1[il]=='F')
        ara[5]++;
         if(str1[il]=='g'||str1[il]=='G')
        ara[6]++;
         if(str1[il]=='h'||str1[il]=='H')
        ara[7]++;
         if(str1[il]=='i'||str1[il]=='I')
        ara[8]++;
         if(str1[il]=='j'||str1[il]=='J')
        ara[9]++;
         if(str1[il]=='k'||str1[il]=='K')
        ara[10]++;
         if(str1[il]=='l'||str1[il]=='L')
        ara[11]++;
         if(str1[il]=='m'||str1[il]=='M')
        ara[12]++;
         if(str1[il]=='n'||str1[il]=='N')
        ara[13]++;
         if(str1[il]=='o'||str1[il]=='O')
        ara[14]++;
         if(str1[il]=='p'||str1[il]=='P')
        ara[15]++;
         if(str1[il]=='q'||str1[il]=='Q')
        ara[16]++;
         if(str1[il]=='r'||str1[il]=='R')
        ara[17]++;
        if(str1[il]=='s'||str1[il]=='S')
        ara[18]++;
         if(str1[il]=='t'||str1[il]=='T')
        ara[19]++;
         if(str1[il]=='u'||str1[il]=='U')
        ara[20]++;
         if(str1[il]=='v'||str1[il]=='V')
        ara[21]++;
         if(str1[il]=='w'||str1[il]=='W')
        ara[22]++;
         if(str1[il]=='x'||str1[il]=='X')
        ara[23]++;
         if(str1[il]=='y'||str1[il]=='Y')
        ara[24]++;
         if(str1[il]=='z'||str1[il]=='Z')
        ara[25]++;
    }
  }
      for(il=0;il<26;il++)
      {
      crypt[il].so=(65+il);
      crypt[il].coun=ara[il];
      }
      for(i=0;i<26;i++)
        for(j=i+1;j<26;j++)
      {
        if(crypt[i].coun<crypt[j].coun)
        {
          struct word temp;
          temp.so=crypt[i].so;
          temp.coun=crypt[i].coun;

          crypt[i].so=crypt[j].so;
          crypt[i].coun=crypt[j].coun;

          crypt[j].so=temp.so;
          crypt[j].coun=temp.coun;
        }
      }
      for(i=0;i<26;i++)
        for(j=i+1;j<26;j++)
      {
        if(crypt[i].coun==crypt[j].coun)
        {
          if(crypt[i].so>crypt[j].so)
          {
              struct word temp;
          temp.so=crypt[i].so;
          temp.coun=crypt[i].coun;

          crypt[i].so=crypt[j].so;
          crypt[i].coun=crypt[j].coun;

          crypt[j].so=temp.so;
          crypt[j].coun=temp.coun;

          }
        }
      }
      for(i=0;i<26;i++)
      {
        if(crypt[i].coun==0)
            continue;
        printf("%c %d\n",crypt[i].so,crypt[i].coun);
      }

  return 0;
}
