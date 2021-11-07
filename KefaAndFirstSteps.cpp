#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1,cel=1;
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=1;i<n;i++)
    {
        if(s[i]>=s[i-1])
            {
                c++;
                cel=max(cel,c);
            }
        else
            c=1;
    }
    cout<<cel;
}
