#include<stdio.h>
#include<string.h>
#include<iostream>
#include<queue>
using namespace std;

struct data
{
    string str;
    string cstr;
    int match;
    int point;
    int win;
    int draw;
    int goali;
    int goala;
    int loss;
    int goald;
    bool operator < (const data & p)const
    {
     if(p.point<point)
     return false;
     if(p.point==point && p.win<win)
     return false;
     if(p.point==point && p.win==win && p.goald<goald)
     return false;
     if(p.point==point && p.win==win && p.goald==goald && p.goali<goali)
     return false;
     if(p.point==point && p.win==win && p.goald==goald && p.goali==goali && p.match>match)
     return false;
     if(p.point==point && p.win==win && p.goald==goald && p.goali==goali && p.match==match && p.cstr<cstr)
     return false;
     return true;
    }
};
priority_queue<data>q;

struct obosta
{
    string str;
    int match;
    int point;
    int win;
    int draw;
    int goali;
    int goala;
    int loss;
    int goald;
};

int main()
{
    string title;
    string str1;
    string fstr;
    string sstr;
    int i,j,k,l,t,n,fg,sg,nute,key,p;
    data u,v;
    struct obosta bortoman[35];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
       // gets(title);
        getline(cin,title);
       // scanf("%d",&nute);
        cin>>nute;
        getchar();
        for(i=0; i<nute; i++)
        {

//            gets(bortoman[i].str);
             getline(cin,bortoman[i].str);
         //    getline(cin,title);
            bortoman[i].match=0;
            bortoman[i].point=0;
            bortoman[i].win=0;
            bortoman[i].draw=0;
            bortoman[i].goali=0;
            bortoman[i].goala=0;
            bortoman[i].loss=0;
            bortoman[i].goald=0;
        }

        for(i=0;i<nute;i++)
         {
        //  printf("%d %s\n",i,bortoman[i].str);
          cout<<bortoman[i].str<<endl;
         }

        scanf("%d",&n);
    //    printf("n===%d\n",n);
        getchar();
        for(i=0; i<n; i++)
        {
         //   gets(str1);
            getline(cin,str1);
            for(j=0; ; j++)
            {
                if(str1[j]=='#')
                    break;
                fstr+=str1[j];
            }
         //   fstr[j]='\0';
            j++;
            fg=str1[j]-'0';
            j++;
            if(str1[j]>='0' && str1[j]<='9')
            {
                fg=fg*10+str1[j]-'0';
                j++;
            }
            j++;
            sg=str1[j]-'0';
            j++;
            if(str1[j]>='0' && str1[j]<='9')
            {
                sg=sg*10+str1[j]-'0';
                j++;
            }
            j++;
            l=0;
            while(str1[j])
            {
                sstr+=str1[j];
                j++;
            }
          //  sstr[l]='\0';
            printf("fstr=%s fg=%d sstr=%s sg=%d\n",fstr.c_str(),fg,sstr.c_str(),sg);
            key=0;
         //   cout<<"----------------"<<fstr<<endl;
            for(j=0; j<nute; j++)
            {
                if(key==2)
                    break;
               // if(strcmp(fstr,bortoman[j].str)==0)
             //  if(bortoman[0].str==fstr)
                cout<<endl;
                cout<<"*********************"<<fstr<<endl;
                cout<<"*********************"<<bortoman[0].str<<endl;
                cout<<endl;
               // cout<<bortoman[j].str<<endl;
                 if(fstr==bortoman[j].str)
                {
                    key++;
                    bortoman[j].match++;
                    if(fg>sg)
                    {
                        bortoman[j].win++;
                        bortoman[j].point=bortoman[j].point+3;
                    }
                    if(fg==sg)
                    {
                        bortoman[j].draw++;
                        bortoman[j].point=bortoman[j].point+1;
                    }
                    if(fg<sg)
                    {
                        bortoman[j].loss++;
                    }
                    bortoman[j].goali=bortoman[j].goali+fg;
                    bortoman[j].goala=bortoman[j].goala+sg;
                    bortoman[j].goald=bortoman[j].goali-bortoman[j].goala;
                }
               // if(strcmp(sstr,bortoman[j].str)==0)
                if(sstr==bortoman[j].str)
                {
                    printf("sstr==%s\n",sstr.c_str());
                    key++;
                    bortoman[j].match++;
                    if(sg>fg)
                    {
                        bortoman[j].win++;
                        bortoman[j].point=bortoman[j].point+3;
                    }
                    if(fg==sg)
                    {
                        bortoman[j].draw++;
                        bortoman[j].point=bortoman[j].point+1;
                    }
                    if(sg<fg)
                    {
                        bortoman[j].loss++;
                    }
                    bortoman[j].goali=bortoman[j].goali+sg;
                    bortoman[j].goala=bortoman[j].goala+fg;
                    bortoman[j].goald=bortoman[j].goali-bortoman[j].goala;
                }

            }
      //      printf("key==%d\n",key);
        }
        for(i=0;i<nute;i++)
        {
        /*
         printf("%s\n",bortoman[i].str);
         printf("match==%d\n",bortoman[i].match);
          printf("win==%d\n",bortoman[i].win);
           printf("draw==%d\n",bortoman[i].draw);
            printf("loss==%d\n",bortoman[i].loss);
             printf("point==%d\n",bortoman[i].point);
              printf("goali==%d\n",bortoman[i].goali);
               printf("goala==%d\n",bortoman[i].goala);
               printf("goald==%d\n",bortoman[i].goald);
            */
        //    strcpy(u.str,bortoman[i].str);
            u.str=bortoman[i].str;
            u.match=bortoman[i].match;
            u.win=bortoman[i].win;
            u.draw=bortoman[i].draw;
            u.loss=bortoman[i].loss;
            u.point=bortoman[i].point;
            u.goali=bortoman[i].goali;
            u.goala=bortoman[i].goala;
            u.goald=bortoman[i].goald;
            l=(bortoman[i].str).size();
            for(j=0;j<l;j++)
            u.cstr[j]=tolower(u.str[j]);
            u.cstr[j]='\0';
            q.push(u);
        }
        p=0;
        cout<<title<<endl;
        while(!q.empty())
        {
         p++;
         u=q.top();
        printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",p,u.str.c_str(),u.point,u.match,u.win,u.draw,u.loss,u.goald,u.goali,u.goala);
         q.pop();
        }
        if(t!=0)
        printf("\n");
    }
}

