class Solution {
private:
    char toLowerCase(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
            return ch;

        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }

    bool isTrue(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
            return true;

        else
            return false;
    }
    bool checkPalindrome(string s)
    {
        int n=s.length()-1;
        int start=0;
        int end=n;

        while(start<=end){
            if(!isTrue(s[start]))
                start++;

            else if(!isTrue(s[end]))
                end--;

            else if(toLowerCase(s[start])==toLowerCase(s[end])){
                start++;
                end--;
            }

            else
                return false;
        }

        return true;
    }
    
public:
    bool isPalindrome(string s) {
        string temp;
        int n=s.length();

        for(int i=0;i<n;i++){
            if(isTrue(s[i]))
                temp.push_back(s[i]);
        }

        for(int i=0;i<temp.length();i++){
            temp[i]=toLowerCase(temp[i]);
        }

        return checkPalindrome(temp);
    }
};
