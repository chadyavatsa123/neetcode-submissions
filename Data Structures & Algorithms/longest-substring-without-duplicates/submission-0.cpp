class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int r=0;
        int cnt=0;
        while(r<s.size()){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                if(mp[s[l]]==0)
                mp.erase(s[l]);
                l++;
            }
          cnt=max(cnt,r-l+1);
          r++;
        }
        return cnt;
    }
};
