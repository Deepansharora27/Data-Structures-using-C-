#include <queue>

void reverseQueue(queue<int> &q) {
	// Write your code here
    
    if(q.empty())
        return ; 
    
    int data = q.front(); 
    q.pop(); 
    
    reverseQueue(q); 
    q.push(data); 

}