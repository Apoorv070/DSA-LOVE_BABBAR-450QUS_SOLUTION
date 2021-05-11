int longestSubsequence(int n, int a[])
{
   // your code here
   
   vector<int> v;
   v.push_back(a[0]);
   for(int i = 1 ; i <n ; i++){
       if(a[i]>v.back()){
           v.push_back(a[i]);
       }else{
          int ans = lower_bound(v.begin(),v.end(),a[i])-v.begin();
           
           v[ans]=a[i];
       }
   }
   
   return v.size();
}
