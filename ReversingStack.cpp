#include<stack>

void reverseStack(stack<int> &input, stack<int> &extra) {
	// Write your code here
     if(input.size()==0 || input.size()==1)
         return ; 
    
    
    int x = input.top(); 
    input.pop(); // Also Removing the Element From the Stack . 
    
    reverseStack(input,extra); 
    
    while(input.empty()!=1){
        extra.push(input.top()); 
        input.pop(); // Emptying the Given Input Stack . 
    }
    input.push(x); 
    while(extra.empty()!=1){
        input.push(extra.top()); 
        extra.pop();  //Emptying the Auxilliary Stack . 
    }

}