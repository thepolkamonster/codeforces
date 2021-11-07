#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll get(ll a)
{
    while(a%2==0)
    {
        a=a/2;
    }
    return a;
}
ll get2(ll a)
{
    int res=0;
    while(a%2==0)
    {
        a=a/2;
        res++;
    }
    return res;
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(get(a)!=get(b))
        {
            cout<<-1;
            return 0;
        }
        int r1=get2(a);
        int r2=get2(b);
        double x=r1-r2;
        double h=3;
        cout<<"-> "<<r1<<"-> "<<r2<<"\n";
        cout<<ceil(x/h);

    }
    return 0;
}
