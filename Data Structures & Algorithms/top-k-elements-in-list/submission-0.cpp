
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
       
       
        vector<int>ans;
        while(k>0){
        int mx=0;
        int num;
        for(auto it:mpp){
           if(it.second>mx){
            mx=it.second;
            num=it.first;
           }
        }
        ans.push_back(num);
        mpp.erase(num);
        k--;
        }
        return ans;
    }
};
