class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int maximum=INT_MIN;
        int val;
        for(auto it:mp){
            if(it.second>maximum){
                maximum=it.second;
                val=it.first;
            }
        }

        return val;
    }
};
