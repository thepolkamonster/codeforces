#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans=0;
        for(long long i=1;i<=n/2;i++)
        {
            ans=ans+i*i;
        }
        cout<<ans*8ll;
    }
    return 0;
}
