#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>v,int target)
{
    int n =v.size();
    int left,right;
    left = 0;
    right = n-1;
    int mid = (right+left)/2;
    while(left<=right)
    {
        if(v[mid]==target)
        {
            return mid;
        }
        if(target>v[mid])
        {
            left =mid+1;
        }
        else
        {
            right = mid-1;
        }

        mid = (right+left)/2;
    }
    return -1;

}

int main()
{
   vector<int>v= {1,3,4,6,10};
   int index = binarysearch(v,6);
   cout<<index;
   return 0;
}