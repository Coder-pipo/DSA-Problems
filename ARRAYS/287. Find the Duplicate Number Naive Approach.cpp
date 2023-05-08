class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;

        int val;
        for(auto it:mp){
            if(it.second>=2)
                val=it.first;
        }

        return val;
    }
};
