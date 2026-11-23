class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<array<int, 26>,vector<string>> mp;
      for(int i=0;i<strs.size();i++){
        array<int,26>arr={};
        for(int j=0;j<strs[i].size();j++){
            arr[strs[i][j]-'a']++;
        }
        mp[arr].push_back(strs[i]);
      }
      vector<vector<string>>ans;
      for(auto it:mp){
        ans.push_back(it.second);
      }
      return ans;
    }
};