#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> res;
     unordered_map<int, int> mp;
     sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]] = i;
    }

    for (int i = 0; i < nums.size() - 2; i++) {
        if(nums[i]>0) break;
        if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }
        for (int j = i + 1; j < nums.size() - 1; j++) {
            if (j > i + 1 && nums[j] == nums[j-1]) continue;
            int complement = - nums[i] - nums[j];
            if (mp.count(complement) && mp[complement] > j) {
                res.push_back({nums[i], nums[j], complement});
            }
        }
    }

    return res;
    }
};