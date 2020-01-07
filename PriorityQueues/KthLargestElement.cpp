/*
 * PROBLEM STATEMENT :
 *-->Given , an array of integers and 'k' , figure out the Kth largest Element in the
 * Array
 * SAMPLE INPUT 1 :
 * {9  , 4  , 8   , 7   , 11   ,   3}
 * K=2
 * OUTPUT : '9'
 *  9
    /\
    / \
    4  8
   /\   /
   / \  3
   7  11
 *
 */
#include<iostream>
#include<vector>
#include<queue>
using namespace std ;
//Function To Figure Out 'kth' largest element in the Array :
int kthLargest (vector<int> arr, int n, int k){
//-->Figuring Out the kth Largest Element in the Array
//Root-->Maximum Element
priority_queue<int> max_elem ; //By Default : Max Priority Queue
for(int i=0  ; i<n ; i++){
    max_elem.push(arr.at(i));//Pushed all 'n' elements into Our Priority Queue .
}

int curr_index = 0 ;
int output =0 ; //Initially initialising it to 0
while(!max_elem.empty()){
    int ans = max_elem.top(); // Status : ans --> 11
    max_elem.pop(); //Pop Function Works Like Remove Max
    if(curr_index==k-1){
        output = ans  ;
        break ;
    }
    curr_index++ ;

}

return output ;
}

//Driver Function to Test My Code :
int main(){
    vector<int> myVector ;
    myVector.push_back(9);
    myVector.push_back(4);
    myVector.push_back(8);
    myVector.push_back(7);
    myVector.push_back(11);
    myVector.push_back(3);
    int output = kthLargest(myVector,6,2);
    cout << "Kth Largest Element :" << output << endl ;
}