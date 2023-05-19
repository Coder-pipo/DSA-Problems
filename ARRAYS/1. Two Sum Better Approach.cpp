class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for( int i = 0; i < nums.size(); i++ ){
            int val = nums[i];
            int itemSearched = target - val;
            if(mp.find(itemSearched) != mp.end()){
                return{mp[itemSearched], i};
            }
            mp[val]=i;
        }

        return {-1,-1};
    }
};
