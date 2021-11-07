#include<iostream>>
using namespace std;
int main()
{
    string pera;
    string perb,vica,vicb;
    cin>>pera>>perb;
    int n;
    cin>>n;
    cout<<pera<<" "<<perb<<"\n";
    for(int i=0;i<n;i++)
    {

        cin>>vica>>vicb;
        if(pera==vica)
            pera=vicb;
        else if(perb==vica)
            perb=vicb;
        cout<<pera<<" "<<perb<<"\n";
    }
}
