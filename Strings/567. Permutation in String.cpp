class Solution {
private:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])
                return 0;    
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int val=s1[i]-'a';

            count1[val]++;
        }

        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};

        while(i<windowSize&&i<s2.length()){
            int val=s2[i]-'a';

            count2[val]++;
            i++;
        }

        if(checkEqual(count1,count2))
            return true;

        while(i<s2.length()){
            char newChar=s2[i];
            int val=newChar-'a';
            count2[val]++;

            char oldChar=s2[i-windowSize];
            val=oldChar-'a';
            count2[val]--;

            if(checkEqual(count1,count2))
                return true;

            i++;
        }

        return false;
    }
};
