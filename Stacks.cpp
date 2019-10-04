//Making a Stack using Dynamic Array :
#include<iostream>
using namespace std ; 
class stack{
    private:
    int *data ; 
    int NextIndex ;
    int capacity ;  

    public:
    stack(int TotalSize){
       data=new int[TotalSize]; 
       NextIndex=0 ; 
       capacity=TotalSize; 
    }
    //Return the Number of Elements present in my Stack 
    int size(){
        return NextIndex; 
    }
    bool isEmpty(){
        if(NextIndex==0)
        return true ; 
        else
        {
            return false ; 
        }  
    }

    //Inserting an element into the Stack : 
    void push(int element){
        if(NextIndex==capacity){
            cout << "Stack is Full !! You cannot insert more Elements !!" << endl ; 
            return ; 
        }else{
      data[NextIndex]=element ; 
      NextIndex++ ; 
        }
    }
    
    //Deleting an Element
    int pop(){
        if(NextIndex==0){
            cout << "Sorry !! The Stack is Empty You cannot delete More Elements !!" << endl ; 
        }else{
        NextIndex-- ; 
        return data[NextIndex]; 
        }
    }
   
   int top(){
       if(isEmpty())
       cout << "Sorry !! The Stack is Empty " << endl ; 
       else
       return data[NextIndex-1]; 
   }





}; 

int main(){
    stack s1(4) ; 
    s1.push(10); 
    s1.push(20); 
    s1.push(30); 
    s1.push(40); 
    s1.push(50); 

    cout << s1.top() << endl ; 
    cout << s1.pop() << endl ; 

    cout << s1.size() << endl ; 
    cout << s1.isEmpty() << endl ;
}