class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int s=temp.size();
        for(int i=0;i<s;i++){
            nums[i]=temp[i];
        }
        for(int i=s;i<n;i++){
            nums[i]=0;
        }
        
      for(auto it:nums)  {
          cout<<it;
      }
    }
};