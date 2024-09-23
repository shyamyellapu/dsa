class Solution {
public:
    string defangIPaddr(string a) {
        string as="";
        for(int i=0;i<a.size();i++){
            if(a[i]!='.'){
                as +=a[i];
            }
            else{
                as +="[.]";
            }
        }
        return as;
    }
};