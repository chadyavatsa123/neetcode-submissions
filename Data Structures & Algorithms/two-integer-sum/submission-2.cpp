class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool found=false;
        int first=-1;
        int second=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    found=true;
                    first=i;
                    second=j;
                    break;
                }
                
            }
        }
        if(found)return {first,second};
    }
};
