#include <iostream>
using namespace std;




bool DFS(int** edges , int V , int StartVertex , bool* visited){

    visited[StartVertex]=true ;
    for(int i=0 ; i<V ; i++){

        if(visited[i]){
            continue ;
        }
        if(i==StartVertex){
            continue ;
        }
        if(edges[StartVertex][i]==1){
            DFS(edges,V,i,visited);
        }
    }
    for(int i=0 ; i<V ; i++){
        if(!visited[i])
        {
            return false;
        }
    }
    return true;



}

int main() {
    int V, E;
    cin >> V >> E;

    /*

           Write Your Code Here
         Complete the Rest of the Program
         You have to take input and print the output yourself

    */
    int** edges = new int*[V];
    for(int i=0 ; i<V ; i++){
        edges[i]=new int[V];
        for(int j=0 ; j<V ; j++){
            edges[i][j]=0 ;
        }
    }

    for(int i=0 ; i<E ; i++){
        int first,second ;
        cin >> first >> second ;

        edges[first][second]=1 ;
        edges[second][first]=1 ;
    }

    bool*visited = new bool[V];
    for(int i=0 ; i<V ; i++){
        visited[i]=false ;
    }

    bool output =  DFS(edges,V,0,visited);



    if(output){
        cout << "true" << endl ;
    }else{
        cout << "false" << endl ;
    }

    return 0;
}
