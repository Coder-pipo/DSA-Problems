//O(N) + O(N*logN)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v1;
        pair<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp.first=nums[i];
            mp.second=i;
            v1.push_back(mp);
        }

        
        sort(v1.begin(),v1.end());
        auto it1=v1.begin(),it2=v1.end()-1;
        while(it1<it2){
            if((it1->first+it2->first)==target){
                return {it1->second,it2->second};
            }

            else if((it1->first+it2->first)<target){
                it1++;
            }

            else{
                it2--;
            }
        }

        return {-1,-1};
    }
};
