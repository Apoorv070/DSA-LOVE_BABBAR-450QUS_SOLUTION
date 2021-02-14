char* reverse(char *S, int len)
{
    //code here
    stack<char> s;
    char *arrs1 = new char[len+1] ;
    for(int i =0 ; i < len ; i++)
        s.push(S[i]);
    for(int i =0 ; i < len ; i++){
        arrs1[i] = s.top();
        s.pop();
        //cout<<arrs1[i];
    }
    arrs1[len] = '\0';
    return arrs1;
        
}
