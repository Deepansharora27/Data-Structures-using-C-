#include<iostream>
#include<queue>
#include<vector>
using namespace std ;

vector<int> kSmallest(int *input, int n, int k) {
    // Write your code here
    priority_queue<int> max_elem ;
    for(int i=0 ; i<k ; i++){
        max_elem.push(input[i]);
    }
    for(int i=k ; i<n ; i++){
        if(input[i]<max_elem.top()){
            max_elem.push(input[i]);
            max_elem.pop(); //Removing the Largest in place of the Substituted Element .
        }
    }
    //Now , put the elements in the Vector and Return call-back to Function :
    vector<int> final_output;
    while(!max_elem.empty()){
        final_output.push_back(max_elem.top());
        max_elem.pop();
    }
    return final_output ;
}