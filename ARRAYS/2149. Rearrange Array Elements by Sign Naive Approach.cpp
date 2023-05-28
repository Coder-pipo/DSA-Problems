//O(N+N/2)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;

        for(int k=0;k<nums.size();k++){
            if(nums[k]<0)
                neg.push_back(nums[k]);

            else
                pos.push_back(nums[k]);
        }

        for(int i=0;i<n/2;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }

        return nums;
    }
};
