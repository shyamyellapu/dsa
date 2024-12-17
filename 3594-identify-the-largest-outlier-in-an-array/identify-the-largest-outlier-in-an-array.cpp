class Solution {
public:
    int getLargestOutlier(vector<int>& arr) {
        int n=arr.size();
        int tot_sum=0;
        map<int,int> mp;
        
        for(auto it:arr){
          tot_sum += it;
            mp[it]++;
        }
        //tot-sum =2*x+y
        int ans=-1e9;
        
        for(auto it :arr){
            int curr_outlier=it;
            mp[curr_outlier]--;
            
            //2x
            int temp=tot_sum-curr_outlier;
            if(temp%2==0){
                temp /=2;
                if(mp[temp])ans=max(ans,curr_outlier);
            }
            mp[curr_outlier]++;
        }
        return ans;
    }
};