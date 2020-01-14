#include<iostream>
#include<climits>
using namespace std ;
//Brute Force Approach :
//Recursive Function to Find Out the Minimum No. of Steps to 1
int countStepsTo1(int n){
    if(n <= 1){
        return 0;
    }

    //Recursive Call :
    int  x = countStepsTo1(n-1);

    int y = INT_MAX ;
    int z = INT_MAX ;
    if(n%2==0){
          y = countStepsTo1(n/2);
    }else if(n%3==0){
         z = countStepsTo1(n/3);
    }


   int ans = min(x,min(y,z))+1 ;

    return ans ;



}



int main(){
int out = countStepsTo1(10);

cout << "Min Number of Steps Required:" << out << endl ;
}