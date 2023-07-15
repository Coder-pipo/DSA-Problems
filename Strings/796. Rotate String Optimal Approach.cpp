class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
            return false;

        string concatinated=s+s;
        if(concatinated.find(goal)!=string::npos)
            return true;

        return false;
    }
};
