#include<iostream>
using namespace std ;

//Function To Calculate our n^th Fibonacci Number :
int fibo_helper(int n , int * ans){
    if(n<=1){
        return n;
    }
    //Check if output already exists in the Array :
    if(ans[n]!=-1){
        return ans[n] ;
    }
    int a = fibo_helper(n-1,ans);
    int b = fibo_helper(n-2,ans);

    //Save the Output for Future Use :
    ans[n]=a+b ;
    //At the End , return the Final Output :
    return ans[n];

}

int fibo_dp(int n){
//Creating a New Array of Size N+1 to store the unique results at each state
//So , We can save it for future use .

int *ans = new int[n+1];
//Initalising all the indices of Array to -1 .
for(int i=0 ; i<n ; i++){
    ans[i]=-1 ;
}
return fibo_helper(n,ans);
}


int main(){

}