stack<int> s1;
void SortedStack :: sort()
{
   //Your code here
   
   if(s.empty()){
       return ;
   }
   
   int a = s.top();
   s.pop();
   sort();
   while(s.size()>0&&s.top()>=a){
       s1.push(s.top());
       s.pop();
   }
   s.push(a);
   while(s1.size()!=0){
       s.push(s1.top());
       s1.pop();
   }
   
}
