#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        cout<<min((n-a),(b+1));
    }
    return 0;
}
