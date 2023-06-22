//TLE

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result=nums[0];

        for(int i=0;i<nums.size();i++){
            int product=nums[i];
            for(int j=i+1;j<nums.size();j++){
                result=max(result,product);
                product*=nums[j];
            }
            result=max(result,product);
        }

        return result;
    }
};
