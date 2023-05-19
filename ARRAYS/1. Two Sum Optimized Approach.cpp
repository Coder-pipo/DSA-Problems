//In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N^2). If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.

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
