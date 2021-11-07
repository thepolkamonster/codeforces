#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum=0,num=0;
    cin>>n;
    int *coins=new int[n];
    for(int i=0;i<n;i++)
        {
            cin>>coins[i];
            sum=sum+coins[i];
        }
    sort(coins,coins+n);
    int c=0;
    for(int i=n-1;i>=0;i--)
    {
        c++;
        sum=sum-coins[i];
        num=num+coins[i];
        if(num>sum)
            break;
    }
    cout<<c;
}
