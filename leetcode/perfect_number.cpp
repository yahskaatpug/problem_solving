bool checkPerfectNumber(int num) {

        if(num==1) return false;

        int sum =1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                sum = sum + i;
                if(num/i != i){
                    sum = sum + (num/i);
                }
            }
        }
        return sum == num;
    }