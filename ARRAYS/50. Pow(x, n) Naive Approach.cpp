//But it won't work as the given range of n is -2^31 to 2^31

class Solution {
public:
    double myPow(double x, int n) {
        double val=1;
        if(n<0){
            n=-1*n;
            for(int i=0;i<n;i++)
                val=val*x;
            
            val=1/val;
            return val;
        }

        for(int i=0;i<n;i++)
            val=val*x;

        return val;
    }
};
