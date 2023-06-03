class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int index;
        bool flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
                flag=1;
                break;
            }
        }

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                ans.push_back(i);
                break;
            }
        }

        if(flag==0)
            return {-1,-1};

        return ans;
    }
};
