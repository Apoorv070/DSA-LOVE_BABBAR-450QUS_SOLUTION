
//o(1) space o(n) time
bool ispar(string x)
{
    // Your code here
    stack<char> s;
    bool ans = true;
    for(int i = 0 ; i< x.length() ; i++){
        if(x[i]=='['||x[i]=='{'||x[i]=='(')
            s.push(x[i]);
        else{
            if(x[i]==')'){
                if(s.size()==0){
                    ans = false;
                    break;
                }
                if(s.top()=='(')
                s.pop();
                else
                ans=false;
            }else if(x[i]=='}'){
                 if(s.size()==0){
                    ans = false;
                    break;
                }
                
            
                if(s.top()=='{')
                s.pop();
                else
                ans=false;
            }else{
                 if(s.size()==0){
                    ans = false;
                    break;
                }
                
                if(s.top()=='[')
                s.pop();
                else
                ans=false;
            }
        }
    }
    
    if(s.size()!=0)
    ans = false;
    return ans;
}

//o(1) space and time
// https://www.youtube.com/watch?v=QMlDCR9xyd8

int mini  = 10000000;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.size()==0){
	    mini = a;
	    s.push(a);
	}
	else if(a>mini){
	    s.push(a);
	}else{
	    s.push(2*a-mini);
	    mini = a;
	}
	
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size()==0;
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.size()==0){
	    return -1;
	}
	else if(s.top()>mini)
	s.pop();
	else{
	   mini = 2*mini - s.top();
	   s.pop();
	}
	
}

int getMin(stack<int>& s){

	return mini;
	
}
