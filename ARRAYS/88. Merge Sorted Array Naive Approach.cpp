class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> num(m+n);
        int k=0;
        for(int i=0;i<m;i++)
            num[k++]=nums1[i];

        for(int j=0;j<n;j++)
            num[k++]=nums2[j];

        sort(num.begin(),num.end());
        for(int i=0;i<m+n;i++)
            nums1[i]=num[i];
    }
};
