#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int rem=0,res=0;
        string s;cin>>s;
        char a='(';
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==a)
                rem++;
            else
                rem--;
            if(rem<0)
            {
                res++;
                rem=0;
            }
        }
        cout<<res;
    }
}
