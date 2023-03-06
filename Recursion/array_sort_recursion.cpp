#include<bits/stdc++.h>
using namespace std;

void insert_in_array(vector<int>&v,int n)
{
    if(v.size()==0 || v[v.size()-1]<n)
    {
        v.push_back(n);
        return;
    }
    int value = v[v.size()-1];
    v.pop_back();
    insert_in_array(v,n);
    v.push_back(value);
    return;
}
void sort_array(vector<int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    int last_element = v[v.size()-1];
    v.pop_back();
    sort_array(v);
    insert_in_array(v,last_element);
}
int main()
{
    vector<int>v = {9,4,5,8,2};
    sort_array(v);
    for(auto x :v)
    {
        cout<<x;
    }
    return 0;
}