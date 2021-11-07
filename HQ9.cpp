#include<iostream>
using namespace std;
int main()
{
    int flag=-1;
    string msg;
    cin>>msg;
    //+ does not give any output
    for(int i=0;i < msg.length();i++)
    {
        if(msg[i]>=33 && msg[i]<=126)
        {

            if(msg[i]=='H' || msg[i]=='Q' || msg[i]=='9')
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==-1)
        cout<<"NO";
    else
        cout<<"YES";
}

