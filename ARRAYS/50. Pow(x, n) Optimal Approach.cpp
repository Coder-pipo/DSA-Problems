class Solution {
public:
    double myPow(double x, int n) {
        double val=1;
        long long nTemp=n;
        if(nTemp<0)
            nTemp=-1*nTemp;

        while(nTemp>0){
            if(nTemp%2==0){
                x=x*x;
                nTemp/=2;
            }
            else{
                val=val*x;
                nTemp--;
            }
        }

        if(n<0){
            val=1/val;
        }

        return val;
    }
};
