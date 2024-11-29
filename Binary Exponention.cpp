#include<iostream>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

ll binaryExponen(ll a,ll b)
{
    if(b==0){
        return 1;
    }
    ll res = binaryExponen(a, b/2);
    if(b&1){
        return a*res*res;
    }
    else{
        return res*res;
    }
}
int main()
{
    p(binaryExponen(2,13))


    return 0;
}