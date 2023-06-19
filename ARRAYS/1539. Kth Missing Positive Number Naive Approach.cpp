class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        int ans=0;
        for(int i=1;i<=arr[arr.size()-1];i++){
            auto it=find(arr.begin(),arr.end(),i);

            if(it==arr.end()){
                count++;
                ans=i;
            }

            if(count==k)
                break;
        }

        if(count!=k)
            ans=arr[arr.size()-1]+(k-count);

        return ans;
    }
};
