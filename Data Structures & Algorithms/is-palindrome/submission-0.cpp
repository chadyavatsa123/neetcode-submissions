class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(char ch:s){
            if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||
            (ch>='0' && ch<='9'))
            res+=tolower(ch);
        }
        int l=0;
        int r=res.size()-1;
        while(l<=r){
            if(res[l]!=res[r])return false;
            l++;
            r--;
        }
        return true;
    }
};
