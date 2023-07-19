class Solution {
public:
    int maxDepth(string s) {
        int max_depth=0;
        int curr_depth=0;

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(')
                curr_depth++;
            if(ch==')'){
                max_depth=max(max_depth,curr_depth);
                curr_depth--;
            }
        }

        return max_depth;
    }
};
