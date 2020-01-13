//
// Created by Deepanshu Arora on 13/01/20.
//

#include<iostream>
using namespace std ;

int fibo_iterative_dp(int n ){
int *ans = new int[n+1];
ans[0]=0 ;
ans[1]=1 ;

for(int i=2; i<n ; i++){
    ans[i]=ans[i-1]+ans[i-2];
}

//Return the Final Output :
return ans[n];

}

int main(){

}

