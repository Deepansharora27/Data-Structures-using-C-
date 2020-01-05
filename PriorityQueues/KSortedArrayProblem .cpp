/*
 * PROBLEM : K Sorted ArrayList
 * We will be Given an Input Array , and we have to Sort Our Array in Descending Order
 * SAMPLE INPUT CASE : 12,15,7,4,9 && k=3
 * (Needs Enhancement)
 */
#include<iostream>
#include<queue>
using namespace std ;

void kSortedArray(int input[] , int n , int k){
  priority_queue<int> pq ;
  for(int i=0 ; i<k ; i++){
      pq.push(input[i]); //At this instance , {10,12 and 6} are there in the Heap .
  }
  int j=0 ;//Depicts the Index for which we are currently Figuring Out the Value in Our Unsorted Array .
  for(int i=k ; i<n ; i++){
    input[j]=pq.top();
    pq.pop();
    pq.push(input[i]);
    j++ ;
  }
  while(!pq.empty()){
      input[j]=pq.top();
      pq.pop();
      j++ ;
  }
}
int main(){
int input[]={12,15,6,7,9};
int k=3 ;
kSortedArray(input,5,k);
for(int i=0 ; i<5 ; i++){
    cout << input[i] << " " ;
}
}
