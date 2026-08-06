class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        
        int mx=0;
        auto it=st.begin();
      while(it!=st.end()){
        int curr=*it;
        int cnt=1;
        it++;
        while(it!=st.end() && *it==curr+1){
            curr=*it;
            cnt++;
            it++;
        }
        mx=max(cnt,mx);

       }
       return mx;
       
    }
};
