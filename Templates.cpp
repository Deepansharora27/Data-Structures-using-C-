#include<iostream>
using namespace std ; 

template<typename T , typename V  , typename Q>

class triplet{
    private:
    T x ; 
    V y ; 
    Q z ; 

    public:
    T setx(T x ){
        this->x=x ; 
    }

    T getx(){
        return x ; 
    }

    T sety(T y){
        this->y=y ; 
    }

    T gety(){
        return y ; 
    }

    T setz(T z){
        this->z=z ; 
    }

    T getz(){
        return z ; 
    }

}; 

int main(){
    triplet<int,int,int> s1 ; 
    s1.setx(10); 
   cout << s1.getx() << endl ; 
    s1.sety(20); 
   cout << s1.gety() << endl ;
    s1.setz(30); 
   cout << s1.getz() << endl ; 
}