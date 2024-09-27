class Solution {
public:
    int maxDistance(vector<int>& colors) {
        if(colors.size()==1){
            return 0;
        }
        int l,r;
        int s=colors.size();
        for(int i=s-1;i>=0;i--){
            if(colors[0]!=colors[i]){
                l=i;
                break;
            }
        }
        for(int i=0;i<s;i++){
            if(colors[i]!=colors[s-1]){
                r=s-1-i;
                break;
            }
        }
        int m=max(l,r);
        return m;
    }
};