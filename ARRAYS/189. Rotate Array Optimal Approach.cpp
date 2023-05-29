class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int val=k%n;

        vector<int> temp;
        for(int i=n-val;i<n;i++)
            temp.push_back(nums[i]);

        for(int i=0;i<n-val;i++)
            temp.push_back(nums[i]);

        for(int i=0;i<n;i++)
            nums[i]=temp[i];
    }
};
