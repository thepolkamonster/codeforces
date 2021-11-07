#include<iostream>
#include<math.h>
using namespace std;
/*The constraint that edges of each flagstone much be parralel to edges of the square allows to analyze X and Y axes separately, that is, how many segments of length 'a' are needed to cover segment of length 'm' and 'n' -- and take product of these two quantities. Answer = ceil(m/a) * ceil(n/a), where ceil(x) is the least integer which is above or equal to x. Using integers only, it is usually written as ((m+a-1)/a)*((n+a-1)/a). Note that answer may be as large as 10^18, which does not fit in 32-bit integer.*/
int main()
{
    unsigned long long a,b,c;
    cin>>a>>b>>c;
    unsigned long long res=ceil((double)a/c)*ceil((double)b/c);
    cout<<res;
}
