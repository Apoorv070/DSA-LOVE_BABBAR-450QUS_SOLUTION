    int countBitsFlip(int a, int b){
        
        // Your logic here
        int num = a^b;
        return  __builtin_popcount(num);
        
    }
