//O(N)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
            return true;
            
        if(s.length()!=goal.length())
            return false;

        int count=0;
        int n=s.length();
        while(count<n-1){
            char temp=s[0];
            for(int i=1;i<n;i++){
                s[i-1]=s[i];
            }
            s[n-1]=temp;


            if(s==goal)
                return true;
            count++;
        }

        return false;
    }
};
