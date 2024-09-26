class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi = 0;
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(maxi<(nums[j]-nums[i])){
                    maxi = nums[j]-nums[i];
                    flag = true;
                }
            }
        }
        if(flag)return maxi;
        return -1;
    }
};