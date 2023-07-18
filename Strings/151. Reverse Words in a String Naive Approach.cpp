class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        stack<string> v;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(str!="")
                    v.push(str);
                str="";
            }
            else
                str+=s[i];
        }

        if(str!="")
            v.push(str);
        string ans="";
        while(v.size()!=1){
            ans+=(v.top()+" ");
            v.pop();
        }
        ans+=v.top();
        return ans;
    }
};
