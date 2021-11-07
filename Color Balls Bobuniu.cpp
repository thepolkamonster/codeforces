#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        if(r==b && b==g)
            cout<<"Yes";

        for(int i=0;i<min(r,min(g,b));i++)
        {
            if(r%2==0 && g%2==0 &b%2==0)
                {
                    cout<<"Yes";
                    return 0;
                }
            else
                w=w+3;
        }
    }
    cout<<"No";
    return 0;
}
