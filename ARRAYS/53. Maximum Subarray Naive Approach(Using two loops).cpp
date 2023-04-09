//Brute Force approach using two loops
//TLE

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int MaxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                
                sum+=nums[j];

                if(sum>MaxSum){
                    MaxSum=sum;
                }
            }
        }
        return MaxSum;
    }
};
