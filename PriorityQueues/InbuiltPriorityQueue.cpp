#include<iostream>
#include<queue>
using namespace std ;
//Point To Remember : Our Inbuilt Priority Queue which is provided in the C++ STL is by default Max Priority Queue
int main(){
    priority_queue<int> pq ;
    pq.push(16);
    pq.push(1);
    pq.push(167);
    pq.push(7);
    pq.push(45);
    pq.push(32);

    cout << "Size of Priority Queue : " << pq.size() << endl ;
    cout << "Top :" << pq.top() << endl ;

    while(!pq.empty()){
        cout << pq.top() << endl ;
        pq.pop();
    }
}