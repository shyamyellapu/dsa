class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i =0;i<n-1;i++){
            int maxi =arr[i+1];
            for(int j=i+2;j<n;j++){
             maxi = max(maxi, arr[j]);
               
                
            }
             arr[i]=maxi;
            
        }
        arr[n-1]=-1;
        return arr;
    }
};