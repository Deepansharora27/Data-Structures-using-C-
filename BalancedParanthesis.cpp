
//Given a string expression, check if brackets present in the expression are balanced or not. Brackets are balanced if the bracket which opens last, closes first.

#include<stack>


bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}



bool checkBalanced(char *exp) {
	// Write your code here

    
    stack<char>s ; 
    
    for(int i=0 ; exp[i]!=NULL ; i++){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            s.push(exp[i]); 
        }else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(s.empty())
                return false ; 

            if(ArePair(s.top(),exp[i])){
                s.pop(); 
            }else{
                return false ; 
            }     
        }
    }
    
    if(s.empty())
        return true ; 
    else
        return false ;
}


