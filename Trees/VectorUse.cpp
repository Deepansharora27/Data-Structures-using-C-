//
// Created by Deepanshu Arora on 13/10/19.
//

#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> v; //Static Allocation of Vector
    //vector<int> *vp = new vector<int>(); //Dynamic Allocation of Vector

    for(int i=0 ; i<100; i++){
        v.push_back(i+1);
        cout << v.size() << endl ;
    }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1]=100 ;
    v[3]=1002 ;
    v[4]=1234 ;

    v.push_back(23);
    v.push_back(234);

//    cout << v[0] << endl ;
//    cout << v[1] << endl ;
//    cout << v[2] << endl ;
//    cout << v[3] << endl ;
//    cout << v[4] << endl ;
//    cout << v[5] << endl ;
//    cout << v[6] << endl ;

//    cout << "Size:" << v.size() << endl ;
//
//    cout << "The Element present at Position Num2 and Position Num6 is :" << endl ;
//    cout << v.at(2) << endl ;
//    cout << v.at(6) << endl ;

    //.at() is a much safer method to use while accessing the vector .


    //These [] will only be used for getting the element and updating element
    // at a Particular Index .

    v.pop_back(); // For Deleting the Last Element from the Memory .

//    for(int i=0 ; i<v.size() ; i++){
//        cout << v.at(i) << endl ;
//    }


}

