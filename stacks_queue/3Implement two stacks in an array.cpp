void twoStacks :: push1(int x)
{
    arr[top1+1]=x;
    top1++;
}
   
/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x)
{
    arr[top2-1]=x;
    top2--;

}
   
/* The method pop to pop element from the stack 1 */
//Return the popped element
int twoStacks ::pop1()
{
    if(top1==-1)
        return -1;
    else{
        int a = arr[top1];
        top1--;
        return a;
    }
}

/* The method pop to pop element from the stack 2 */
//Return the popped element
int twoStacks :: pop2()
{
        if(top2==size)
        return -1;
    else{
        int a = arr[top2];
        top2++;
        return a;
    }

}
