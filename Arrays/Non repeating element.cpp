#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    int ans=0;
    for(auto x: v)
    {
        ans=ans^x; //bitwise operation
    }
    cout<<ans;

}