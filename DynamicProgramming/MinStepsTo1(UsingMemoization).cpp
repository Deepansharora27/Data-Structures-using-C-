#include<iostream>
using namespace std ;


int minStepsHelper(int n , int*ans){
    if(n<=1){
        return 0 ;
    }

    //Check if output already exists  :
    if(ans[n]!=-1){
        return ans[n] ;
    }

    //Calculate Output :
    int x = minStepsHelper(n-1);
    int y=INT_MAX ;
    int z = INT_MAX ;

    if(n%2==0){
        y=minStepsHelper(n/2,ans);
    }
    if(n%3==0){
        z=minStepsHelper(n/3,ans);
    }

    int output = min(x,min(y,z))+1 ;

    //Save Output for Future Use :
    ans[n]=output ;
    return output ;

}

int countStepsTo1(int n){
int *ans = new int[n+1];
for(int i=0 ; i<=n ; i++){
    ans[i]=-1 ;
}

return minStepsHelper(n,ans);
}


