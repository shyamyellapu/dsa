class Solution {
public:
    int finalValueAfterOperations(vector<string>& n) {
        int ans=0;
        for(int i=0; i<n.size();i++){
            if(n[i]=="--X"||n[i]=="X--"){
                ans=ans-1;
            }
            else{
                 ans=ans+1;
            }
        }
        return ans;
        
    }
};