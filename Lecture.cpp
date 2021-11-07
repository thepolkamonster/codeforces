#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<string,string>> v;
        string x;
        string y;
        string s;
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            v.push_back({x,y});
        }
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<m;j++)
            {
                if(s==v[j].first || s==v[j].second)
                {
                    if(v[j].first.length()>v[j].second.length())
                        cout<<v[j].second<<" ";
                    else
                        cout<<v[j].first<<" ";
                }
            }

        }

    }
    return 0;
}
