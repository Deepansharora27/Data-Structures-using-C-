#include<iostream>
#include<vector>
using namespace std ;



vector<int>* Get_PathHelper(int** edges , int V , int Start , int End , bool* visited){
    if(Start==End){
        vector<int>* output = new vector<int>();
        output->push_back(End);
        return output ;
    }
    visited[Start]=true ;
    for(int i=0 ; i<V ; i++){
        if(edges[Start][i] && !visited[i]){
            vector<int>* SmallOutput = Get_PathHelper(edges,V,i,End,visited);
            if(SmallOutput!=NULL){
                SmallOutput->push_back(Start);
                return SmallOutput ;
            }
        }
    }
    return NULL ;
}

vector<int>* Get_Path(int** edges , int V , int Start , int End){
    bool* visited = new bool[V];
    for(int i=0 ; i<V ; i++){
        visited[i]=false ;
    }

    vector<int>* output = Get_PathHelper(edges,V,Start,End,visited);
    delete[] visited ;
    return output ;
}

int main(){
    int V,E ;
//    cout << "Enter the Number of Vertices and Edges :" << endl ;
    cin >> V >> E ;

    int** edges = new int*[V];
    for(int i=0 ; i<V ; i++){
        edges[i]=new int[V];
        for(int j=0 ; j<V ; j++){
            edges[i][j]=0 ;
        }
    }

    for(int i=0 ; i<E ; i++){
        int first,second ;
//        cout << "Enter the Connecting First and the Second Vertex:" << endl ;
        cin >> first >> second ;

        edges[first][second]=1 ;
        edges[second][first]=1 ;
    }

   int v1,v2 ;
    cin >> v1 >> v2 ;

    vector<int>* output = Get_Path(edges,V,v1,v2);
    if(output!=NULL){
      for(int i=0 ; i<output->size(); i++){
          cout << output->at(i) << " " ;
      }
    }




}