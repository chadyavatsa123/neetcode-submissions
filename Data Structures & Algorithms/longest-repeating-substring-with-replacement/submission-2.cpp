class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int l=0;
        int r=0;
        int freq=0;
        int cnt=0;
        while(r<s.size()){
          mp[s[r]]++;
          freq=max(freq,mp[s[r]]);
          while((r-l+1)-freq>k){
            mp[s[l]]--;
            l++;
           
          }
          if((r-l+1)-freq<=k)
          cnt=max(cnt,r-l+1);
          r++;
        }
        return cnt;
    }
};
