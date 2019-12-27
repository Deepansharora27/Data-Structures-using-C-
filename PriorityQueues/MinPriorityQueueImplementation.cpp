#include<iostream>
#include<vector>
using namespace std ;

class PriorityQueue{
    vector<int> pq ;

public:
    PriorityQueue(){
        //Default Constructor for the Class
    }

    bool isEmpty(){
        //Our Priority Queue will be Empty , when the size of our vector pq will be 0 .
        return pq.size()==0 ;
    }

    //Return the Size of Priority Queue , or in other words number of elements present in the Priority Queue .
    int getSize(){
        return pq.size() ;
    }

    int getMin(){
        //Returns the Minimum Element of the Priority Queue
        if(isEmpty()){
            return 0 ; //Signifying that Our Priority Queue is Empty , and no element is present at the Moment .
        }
        return pq.at(0) ;
    }

    //Function for inserting an Element into the Priority Queue :
    void insert(int element){
        pq.push_back(element);

        int ChildIndex = pq.size()-1 ;

        while(ChildIndex>0) {
            int ParentIndex = (ChildIndex - 1) / 2;

            //If the Value at the Child Index is Smaller , then we Have to swap the
            //element at the Parent Index and the Child Index .

            if (pq.at(ChildIndex) < pq.at(ParentIndex)) {
                //Now , we have to Perform Swapping Operation Here :
                int temp = pq.at(ChildIndex);
                pq.at(ChildIndex) = pq.at(ParentIndex);
                pq.at(ParentIndex) = temp;
            }else{
                break ;
            }
            ChildIndex = ParentIndex;
        }//Ending of the While Loop .

    }

    //Removing the Minimum Element From The Priority Queue :
    int RemoveMin(){
        int answer = pq.at(0);
        pq.at(0)=pq[pq.size()-1];

        pq.pop_back(); //Removing the Last Element from the Priority Queue


        int ParentIndex = 0 ;
        int LeftChildIndex = 2*ParentIndex+1 ;
        int RightChildIndex = 2*ParentIndex+2 ;


        while(LeftChildIndex<pq.size()) {
            int MinIndex = ParentIndex ;
            if (pq.at(LeftChildIndex) < pq.at(ParentIndex)) {
                MinIndex = LeftChildIndex;
            } else if (RightChildIndex<pq.size() && pq.at(RightChildIndex) < pq.at(ParentIndex)) {
                MinIndex = RightChildIndex;
            }

            if(ParentIndex==MinIndex){
                break ; //Come out of the While Loop , also signifies that we are at the Leaf Node .
            }

            //Performing the Swapping Operation :
            int temp = pq.at(MinIndex);
            pq.at(MinIndex) = pq.at(ParentIndex);
            pq.at(ParentIndex) = temp;

            //New Parent Index :
            ParentIndex = MinIndex;
            LeftChildIndex=2*ParentIndex+1 ;
            RightChildIndex=2*ParentIndex+2 ;

            //Then the Process Repeats Again and Again ,and we again return to the While Loop .

        }

    }

};