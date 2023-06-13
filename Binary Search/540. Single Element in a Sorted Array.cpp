//O(logN)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int lb=0;
        int ub=nums.size()-1;
        while(lb<ub){
            int mid=lb+(ub-lb)/2;

            if(mid%2==1)
                mid--;

            if(nums[mid]!=nums[mid+1])
                ub=mid;

            else
                lb=mid+2;
        }

        return nums[lb];
    }
};
