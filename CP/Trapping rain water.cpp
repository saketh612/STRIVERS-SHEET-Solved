#include<bits/stdc++.h>
using namespace std;

int traprainwater(vector<int>v,int n)
{
    int left =0,right=n-1;
    int left_max=0,right_max=0;
    int ans = 0;
    while(left<=right)
    {
         left_max =max(v[left],left_max);
         right_max =max(v[right],right_max);
         if(left_max<right_max)
         {
            ans = ans+left_max-v[left];
            left++;
         }
         else if(right_max>left_max)
         {
            ans = ans+right_max-v[right];
            right--;
         }
         else
         {
            left++;
            right--;
         }

    }
    return ans;

}
int main()
{
    vector<int>height={4,2,0,3,2,5};
    cout<< traprainwater(height,6);
    return 0;
}