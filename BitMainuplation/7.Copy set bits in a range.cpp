#include <iostream>
using namespace std;
int main() {
    int x,y;cin>>x>>y;
    int l,r;cin>>l>>r;
    int pos = l-1;
    while(pos<r){
        int mask = 1<<pos;
        int val = mask&y;
        if(val>0){
            x = x|mask;
        }
        pos++;
    }
    cout<<x;
}
