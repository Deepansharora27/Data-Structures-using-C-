#include<bits/stdc++.h>
vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    //Building Using Min Priority Queue
    priority_queue<int , vector<int> , greater<int> > pq ;
    for(int i=0 ; i<k ; i++){
        pq.push(input[i]);
    }
    for(int i=k ; i<n ; i++){
        if(input[i]>pq.top()){
            pq.push(input[i]);
            pq.pop();
        }
    }

    vector<int> final_output ;
    while(!pq.empty()){
        final_output.push_back(pq.top());
        pq.pop();
    }

    return final_output ;



}
