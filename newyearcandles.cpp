#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int hrs=0,h=0;
    for(int i=0;i<a;i++)
    {
        hrs++;
        h++;
        if(h==b)
        {
            a=a+1;
            h=0;
        }
    }
    cout<<hrs;
    return 0;
}
