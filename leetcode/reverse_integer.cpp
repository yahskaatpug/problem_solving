int reverse(int x) {
        bool neg = false;
        int n;
        if(x<0){
            n = abs(x);
            neg = true;
        } 
        else
            n = x;
        
        int moduli = 0;
        long result=0;
        while(n){
            moduli = n%10;
            result = result*10 + moduli;
            n=n/10;
        }

        if(neg) result = result*(-1);

        if(result<pow(-2,31) || result>(pow(2,31)-1)) return 0;// use your own function

        return result;
    }