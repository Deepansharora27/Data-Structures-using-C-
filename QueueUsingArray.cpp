#include<iostream>
using namespace std ; 

template<typename T> 

class Queue{
    private:
    T *data ; 
    int NextIndex ;  
    int FirstIndex ; 
    int size ; 
    int capacity ; 
    public:
    Queue(int s){
        data = new T[s]; 
        NextIndex=0 ; //My First Element of the Queue should go at Index 0 . 
        FirstIndex =-1 ;//Indicates that currently my Queue is Having Empty Status 
        size=0 ; 
        capacity=s ; 
    }
    void enqueue(T element){ 
     if(size==capacity){
         cout << "Sorry Queue is Full No More Insertion Operations Can be Performed !!" << endl ; 
     }else{
      data[NextIndex]=element ; 
      NextIndex=(NextIndex+1)%capacity ; 
      if(FirstIndex==-1){
          FirstIndex=0 ; 
      } 
      size++ ; 
     }
    }
    int front(){
      if(isEmpty()){
          cout << "Queue is Empty !! Front Element can't be displayed" << endl ; 
          return 0 ; 
      }else{
          return data[FirstIndex] ; 
      }
    }
    int  dequeue(){
     if(isEmpty()){
      cout << "Queue is Empty !! You Cannot Perform the Dequeue Operation" << endl ; 
      return 0 ; 
     }else{
      T ans = data[FirstIndex]; 
      FirstIndex=(FirstIndex+1)%capacity ; //Circularly Pointing the FirstIndex Variable .  
      size-- ; 
      if(size==0){
          FirstIndex=-1 ; 
          NextIndex=0 ; 
      }
      return ans ; 
     }

    }  

    void Getsize(){
        cout << "Size of the Required Queue is :" << size << endl ; 
    }
    bool isEmpty(){ // Checks whether my Queue is Empty or Not .
        return size==0 ; 
    }  
}; 
int main(){
   Queue<int> Q1(5) ; 
   
   Q1.enqueue(10); 
   Q1.enqueue(20); 
   Q1.enqueue(30); 
   Q1.enqueue(40); 
   Q1.enqueue(50);

   cout << Q1.front() << endl ;  

   Q1.dequeue(); 
   Q1.dequeue(); 

   cout << Q1.front() << endl ;
   cout << Q1.isEmpty() << endl ;
    Q1.Getsize() ;
}