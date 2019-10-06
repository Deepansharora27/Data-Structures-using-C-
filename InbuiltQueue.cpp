#include<iostream>
#include<queue>
using namespace std ; 
int main(){
    queue<int> q ; 
    q.push(10); 
    q.push(20); 
    q.push(30); 
    q.push(40); 
    q.push(50);

   cout << q.front() << endl ; // For Knowing the Element Present at the Front of the Queue
   q.pop(); 
   q.pop(); 
   cout << q.front() << endl ; 
   cout << q.size() << endl ; 
   cout << q.empty() << endl ;
}

/*
OUTPUT : 
10 
30
3 
0*/
