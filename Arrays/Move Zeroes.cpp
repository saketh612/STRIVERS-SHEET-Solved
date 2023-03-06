class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       int count =0,j=0;
       for(int i=0;i<n;i++){
           if(nums[i]==0)
             count++;
             else{
                 nums[j]=nums[i];
                 j++;
             }
       } 
       int i=n-1;
       while(count--){
        nums[i]=0;
        i--;
       }
    }
};