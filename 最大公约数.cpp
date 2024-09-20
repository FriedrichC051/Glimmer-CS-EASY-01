#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){return y==0?x:gcd(y,x%y);} //欧几里得算法
int main()
{
    int n,m;
    cin>>n>>m;
    int ans;
    ans=gcd(n,m);
    cout<<ans;
}
