    int findPosition(int N) {
        // code here
        int val = N;
        int pos = 0;
        if(val==0)
        return -1;
        while(val>0){
            if(val&1==1){
                pos++;
                if((val>>1)>0){
                    pos = -1;
                    break;
                }else{
                    break;
                }
            }
            val=val>>1;
            pos++;
        }
        return pos;
    }
