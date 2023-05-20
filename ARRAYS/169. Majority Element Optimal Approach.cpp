//Moore's Voting Algorithm
//O(N)+O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element;
        
        //Applying Moore's Voting algorithm
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                element=nums[i];
            }

            else{
                if(element==nums[i])
                    count++;
                else
                    count--;
            }
                
        }
    
        //for checking if the element is majority element or not in case of more than one majority element
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element)
                count++;
        }

        if(count>=(nums.size()/2))
            return element;

        return -1;
    }
};
