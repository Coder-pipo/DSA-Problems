class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        //for first occurance
        int lb=0;
        int ub=nums.size()-1;

        int res2=-1;

        while(lb<=ub){
            int mid=lb+(ub-lb)/2;

            if(nums[mid]==target){
                res2=mid;
                ub=mid-1;
            }

            else if(nums[mid]>target)
                ub=mid-1;

            else
                lb=mid+1;
        }

        ans.push_back(res2);

        //for last occurance
        lb=0;
        ub=nums.size()-1;
        int res1=-1;

        while(lb<=ub){
            int mid=lb+(ub-lb)/2;

            if(nums[mid]==target){
                res1=mid;
                lb=mid+1;
            }

            else if(nums[mid]>target)
                ub=mid-1;

            else
                lb=mid+1;
        }
        ans.push_back(res1);
        return ans;
    }
};
