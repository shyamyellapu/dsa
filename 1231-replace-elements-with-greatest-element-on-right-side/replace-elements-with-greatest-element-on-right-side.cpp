class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        if(n==1){
            return {-1};
        }
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]>c){
                    c=arr[j];
                    arr[i]=c;
                }

            }
        }
        arr[n-1]=-1;
        return arr;
    }
};