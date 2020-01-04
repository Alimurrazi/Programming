/*
Fabho DevAlgorithms, c++, Java, ANSI C, uva judge, ACM ICPC
SKIP TO CONTENT
HOME
USEFUL RESOURCES
ABOUT ME
469 – Wetlands of Florida UVA Solution
OCTOBER 24, 2013 LEAVE A COMMENT
This is an easy problem from uva judge http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=410

A really easy problem using DFS. Flood fill.

How I did it

Read the number of cases
Read the element rows of the matrix.
If I found a digit, I set the dfs_matriz setting any water grid = -1.
Read row and column  and class dfs in that point.
Print the area. Clean the graph.
If we have more cases to process, print a blank line.
Accepted.
Hints

Print a blank line between cases.
The last case has not a blank line after having processed. If(cases != 0) print a blank line.
The reading input is tedious, Im using sstream and getline, for simplify this.
Code
*/
#include <iostream>
#include <cstdio>
#include <cctype>
#include <vector>
#include <sstream>
#define  DFS_WHITE -1
#define  DFS_BLACK 1
#define  MAX 101
using namespace std;

char matriz[MAX][MAX];
int dfs_matriz[MAX][MAX];
int row, col, area;

void dfs(int x, int y)
{
    dfs_matriz[x][y] = DFS_BLACK;
    int a=x, b=y;
            if(a-1 >= 0)
            {
                if(dfs_matriz[a-1][b] == DFS_WHITE)
                {
                    area++;
                    dfs(a-1, b);
                }
                if(b+1 < col && dfs_matriz[a-1][b+1] == DFS_WHITE)
                {
                    area++;
                    dfs(a-1, b+1);
                }
                if(b-1 >= 0 && dfs_matriz[a-1][b-1] == DFS_WHITE)
                {
                    area++;
                    dfs(a-1, b-1);
                }
            }
            if(a+1 < row)
            {
                if(b+1 < col && dfs_matriz[a+1][b+1] == DFS_WHITE)
                {
                    area++;
                    dfs(a+1, b+1);
                }
                if(b-1 >= 0 && dfs_matriz[a+1][b-1] == DFS_WHITE)
                {
                    area++;
                    dfs(a+1, b-1);
                }
                if(dfs_matriz[a+1][b] == DFS_WHITE)
                {
                    area++;
                    dfs(a+1, b);
                }
            }
            if(b-1 >= 0 && dfs_matriz[a][b-1] == DFS_WHITE)
            {
                area++;
                dfs(a,b-1);
            }
            if(b+1 < col && dfs_matriz[a][b+1] == DFS_WHITE)
            {
                dfs(a,b+1);
                area++;
            }
}

void readGraph()
{
    string tmp = "", str;
    int index = 0;
    while(getline(cin, str))
    {
        if(isdigit(str[0]))
           break;
        else
        {
            tmp += str;
            col = str.size();
            row++;
        }
    }

    for(int a=0; a<row; a++)
    {
        for(int b=0; b<col; b++, index++)
        {
            matriz[a][b] = tmp[index];
            if(matriz[a][b] == 'W')
               dfs_matriz[a][b] = DFS_WHITE;
            else
                dfs_matriz[a][b] = 0;
        }
    }

    stringstream ss;
    int flag = 0, x, y, data;
    ss<<str;
    while(ss>>data)
    {
        if(flag == 0)
           x = data;
        else
            y = data;
        flag++;
    }
    dfs(x-1,y-1);
}

void initGraph()
{
    for(int a=0; a<row; a++)
        for(int b=0; b<col; b++)
            if(matriz[a][b] == 'W')
               dfs_matriz[a][b] = DFS_WHITE;
}

int main()
{
string str;
int casos;
scanf("%d", &casos);
getline(cin,str);//trash
getline(cin,str);//trash

while(casos--)
{
    row = col = area = 0;
    readGraph();
    printf("%d\n", area + 1);
    //print();
    stringstream ss;
    int flag, x, y, data;
    while(getline(cin,str))
    {
        if(str.size() == 0)
          break;        flag = 0;
        ss<<str;
        initGraph();
        while(ss>>data)
        {
            if(flag == 0)
               x = data;
            else
                y = data;
            flag++;
        }
        area = 0;
        dfs(x-1,y-1);
        printf("%d\n", area + 1);
        ss.clear();
    }
    if(casos)
       printf("*\n");
}
return 0;
}
