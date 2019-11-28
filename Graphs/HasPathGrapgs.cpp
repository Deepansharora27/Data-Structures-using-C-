//
// Created by Deepanshu Arora on 23/11/19.
//
#include<iostream>
using namespace std ;

bool Has_Path(int** edges , int V, int v1 , int v2){
    //I have to check whether there is an adjacent edge between the startVertex(v1) and EndVertex(v2) :
    if(edges[v1][v2]==1){
        return true ;
    }





}


int main(){
    int V,E ;
    cin >> C >> E ;

    int** edges = new int*[V];
    for(int i=0 ; i<V ; i++){
        edges[i]=new int[V];
        for(int j=0 ; j<V ; j++){
            edges[i][j]=0 ;
        }
    }

    for(int i=0 ; i<E ; i++){
        int first,second ;
        cout << "Enter the First Vertex and Second Vertex:" << endl ;
        cin >> first >> second ;
        edges[first][second]=1 ;
        edges[second][first]=1 ;
    }

    int v1,v2 ;
    cout << "Enter the Starting and the End Vertex for which you want to check the Path:" << endl ;
    cin >> v1 >> v2 ;


    if(Has_Path(edges,V,v1,v2)){
        cout << "true" << endl ;
    }else{
        cout << "false" << endl ;
    }
}

