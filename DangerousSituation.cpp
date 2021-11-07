#include<iostream>
using namespace std;
/*int main()
{
    string s;
    cin>>s;
    if(s.find("1111111") || s.find("0000000"))
        cout<<"Yes";
    else
        cout<<"No";
}

int main()
{
    string s;
    cin>>s;
    int flag=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            flag++;
            if(flag==7)
            {
                cout<<"Yes";
                return 0;
            }
        }
        else
            flag=1;
    }
    cout<<"No";
    return 0;
}
