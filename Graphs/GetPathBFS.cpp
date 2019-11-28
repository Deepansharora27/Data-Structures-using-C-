#include <iostream>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;


vector<int> Get_PathBFS(int**edges,int V,int Start,int End,bool* visited){
    unordered_map<int,int> myMap ;
    vector<int>* output = new vector<int>();
    queue<int>q ;
    q.push(Start);
    bool flag=true;
    visited[Start]=true ;
    while(!q.empty()){
        int x = q.front();
        q.pop();
//        if(x==End){
//            break ;
//        }
        for(int i=0 ; i<V ; i++){
            // if(i==x){
            //     continue ;
            // }
            if(edges[x][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true ;
                myMap[i]=x ;

                if(i==End){
                    flag=false;     // to handle the case when there is no path...then the vector returned should be empty
                    break;
                }
            }
        }
    }
//     unordered_map<int,int>::iterator it ;
//     for( it=myMap.begin() ; it!=myMap.end() ; it++){
//         cout << it->first << " " << it->second << " " << endl ;

//     }
    vector<int>ans;
    if(flag==false){
        ans.push_back(End);
        int val=myMap[End];
        while(val!=Start){
            ans.push_back(val);
            val=myMap[val];
        }
        ans.push_back(Start);
    }
    return ans;
}


int main()
{
    int V, E, tempX, tempY;
    cin >> V >> E;

    /*

           Write Your Code Here
         Complete the Rest of the Program
         You have to Print the output yourself

    */
    int ** edges = new int*[V];
    for(int i=0 ; i<V ; i++){
        edges[i]=new int[V];
        for(int j=0 ; j<V ; j++){
            // edges[i][j]=1 ;
            edges[i][j]=0 ;
        }
    }

    for(int i=0 ; i<E ; i++){
        int first,second ;

        cin >> first >> second ;

        edges[first][second]=1 ;
        edges[second][first]=1 ;

    }
    int v1,v2 ;
    cin >> v1 >> v2 ;

    bool* visited = new bool[V];
    for(int i=0 ; i<V ; i++){
        visited[i]=false ;
    }

    vector<int> ans=Get_PathBFS(edges,V,v1,v2,visited);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}