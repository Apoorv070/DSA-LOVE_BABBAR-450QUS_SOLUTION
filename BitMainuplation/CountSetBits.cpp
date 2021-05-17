    int setBits(int N) {
        // Write Your Code here
        int count = 0;
        while(N>0){
            count++;
            N = N&(N-1);
        }
        return count;
    }
