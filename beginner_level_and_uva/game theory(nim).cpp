#include<bits\stdc++.h>
using namespace std;

int main()
{
    int i,j,n,XOR;
    cout <<"Enter number of piles : ";
    cin>>n;
    XOR=0;
    for(i=1; i<=n; i++)
    {
        cout<<"Enter number of stones in pile "<<i<<": ";
        cin>>j;
        XOR=XOR^j;
    }
    if(XOR)
        cout<<"\nThe game is nonstrategic";
    else
        cout<<"\nThe game is strategic";
    return 0;
}
