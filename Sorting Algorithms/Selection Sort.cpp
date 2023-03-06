class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
 // Selection sort algorithm      
        for( int i=0; i <nums.size()-1 ; i++)
        {
            int min = i;
            for( int j = i+1; j<nums.size(); j++)
            {
                if(nums[j] < nums[min])
                {
                    min = j; 
                }
            }
            swap(nums[min],nums[i]);
        }
        return nums;
    }
};
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v ={9,4,6,7,2};
//     int min_index;
//     for(int i=0;i<v.size()-1;i++)
//     {
//         min_index=i;
//         for(int j=i+1;j<v.size();j++)
//         {
//             if(v[j]<v[min_index])
//             {
//                 swap(v[j],v[min_index]);
//             }
//         }
//     }
//      for(auto x:v)
//     {
//         cout<<x;
//     }
//     return 0;
   
// }