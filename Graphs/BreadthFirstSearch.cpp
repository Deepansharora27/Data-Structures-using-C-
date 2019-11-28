#include <iostream>
#include<queue>
using namespace std;



void printBFS(int** edges , int V , int StartVertex , bool* visited){
    queue<int> PendingVertices ;
    PendingVertices.push(StartVertex);
    visited[StartVertex]=true ;
    while(!PendingVertices.empty()){
        int CurrVertex = PendingVertices.front();
        PendingVertices.pop();
        cout << CurrVertex << " ";
        for(int i=0 ; i<V ; i++){
            if(edges[CurrVertex][i]==1 && !visited[i]){
                PendingVertices.push(i);
                visited[i]=true ;
            }
        }
    }
}


void BFS(int** edges , int V)
{
    bool* visited = new bool[V] ;
    for(int i=0 ; i<V ; i++){
        visited[i]=false ;
    }
    for(int i=0 ; i<V ; i++){
        if(!visited[i]){
            printBFS(edges,V,i,visited);
        }
    }

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
    for(int i=0 ; i<V  ; i++){
        edges[i]=new int[V];
        for(int j=0 ; j<V ; j++){
            edges[i][j]=0 ;
        }
    }

    for(int i=0 ; i<E ; i++){
        int First,second ;
        cin >> First >> second ;

        edges[First][second]=1 ;
        edges[second][First]=1 ;
    }

    bool* visited = new bool[V];
    for(int i=0 ; i<V ; i++){
        visited[i]=false ;
    }

    BFS(edges,V);

    return 0;
}
2