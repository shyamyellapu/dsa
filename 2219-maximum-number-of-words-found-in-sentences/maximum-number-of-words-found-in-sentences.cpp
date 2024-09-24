class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxi=0;
  
  for(int i=0;i<s.size();i++){
    string st=s[i];
    int count=0;
    for(int j=0;j<s[i].size();j++){
    if(st[j]==' '){
     count++;
     
    }}

   maxi=max(maxi,count);
  }
  return maxi+1;
        
    }
};