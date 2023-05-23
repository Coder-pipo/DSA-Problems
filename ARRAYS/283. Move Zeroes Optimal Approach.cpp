class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0)
                break;
            else
                i++;
        }

        int j=i;
        int k=i+1;
        while(j<nums.size()&&k<nums.size()){
            if(nums[k]!=0){
                swap(nums[j],nums[k]);
                j++;
            }
            else
                k++;
        }
    }
};
