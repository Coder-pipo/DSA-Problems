class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());

        int maxCount=1;
        int count=1;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev+1)
                count++;

            else if(nums[i]==prev){
                continue;
            }

            else{
                count=1;
            }
            prev=nums[i];
            maxCount=max(count,maxCount);
        }

        return maxCount;
    }
};
