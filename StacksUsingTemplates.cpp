//Making a Stack using Templates :
#include<iostream>
using namespace std ; 

template<typename T> 

class stack{
    private:
    T *data ; 
    int NextIndex ;
    int capacity ;  

    public:
    stack(){
       data=new T[4]; 
       NextIndex=0 ; 
       capacity=4; 
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
    void push(T element){
        if(NextIndex==capacity){
            /*cout << "Stack is Full !! You cannot insert more Elements !!" << endl ; 
            return ; */
            T *NewData = new T[2*capacity]; 
            for(int i=0 ; i<capacity ; i++){
                NewData[i]=data[i]; 
            }
            capacity *=2 ;
            data=NewData ;  
            delete [] data ; 
            
        }else{
      data[NextIndex]=element ; 
      NextIndex++ ; 
        }
    }
    
    //Deleting an Element
    T pop(){
        if(NextIndex==0){
            cout << "Sorry !! The Stack is Empty You cannot delete More Elements !!" << endl ; 
        }else{
        NextIndex-- ; 
        return data[NextIndex]; 
        }
    }
   
   T top(){
       if(isEmpty())
       cout << "Sorry !! The Stack is Empty " << endl ; 
       else
       return data[NextIndex-1]; 
   }





}; 

int main(){
    stack<char> s1 ;  
    s1.push(100); 
    s1.push(101); 
    s1.push(102); 
    s1.push(103); 
    s1.push(104); 

    cout << s1.top() << endl ; 
   // cout << s1.pop() << endl ; 

   // cout << s1.size() << endl ; 
   // cout << s1.isEmpty() << endl ;
}