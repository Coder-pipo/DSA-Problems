class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        int remainder;

        int temp=x;
        while(temp>0){
            remainder=temp%10;
            reverse=(reverse*10)+remainder;
            temp=temp/10;
        }

        if(x==reverse)
            return true;

        return false;
    }
};
