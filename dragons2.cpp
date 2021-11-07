#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,va,vb;
    vector<pair<int,int>> v;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>va>>vb;
        v.push_back(make_pair(va,vb));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(s<=v[i].first)
        {
            cout<<"NO";
            return 0;
        }
        else{
            s=s+v[i].second;
        }
    }
    cout<<"YES";
}
