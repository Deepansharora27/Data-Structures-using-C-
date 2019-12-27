#include<vector>
#include<climits>

class PriorityQueue {

private:
    vector<int> vect ;

public:
    //Member Functions to Perform the Operations on Our Priority Queue  :
    int getSize(){
        return vect.size() ;
    }

    bool isEmpty(){
        return vect.size()==0 ;
    }

    void insert(int element){
        //We are Visualising this Priority Queue in Our Vector Container :
        vect.push_back(element);

        //Step 1 :Determining the Child Index of the Priority Queue :
        int ChildIndex = vect.size()-1  ;

        while(ChildIndex>0) {
            int ParentIndex = (ChildIndex - 1) / 2;
            if (vect.at(ParentIndex) < vect.at(ChildIndex)) {
                int temp = vect.at(ParentIndex);
                vect.at(ParentIndex) = vect.at(ChildIndex);
                vect.at(ChildIndex) = temp;
            } else {
                break;
            }
            ChildIndex = ParentIndex;
        }//Ending of the While Loop .
    }

    int getMax(){
        if(isEmpty()){
            return 0 ;
        }
        return vect.at(0);
    }

    //Removing the Maximum(i.e.) , the root element from the Priority Queue .
    //There are Some Edge Cases in this Problem , so Have a Look at them as well .
    int RemoveMax() {
        int answer = vect.at(0);
        vect.at(0) = vect[vect.size() - 1];

        vect.pop_back(); //Removing the Last Element from the Priority Queue .

        int ParentIndex = 0;
        int LeftChildIndex = 2 * ParentIndex + 1;
        int RightChildIndex = 2 * ParentIndex + 2;

        while (LeftChildIndex < vect.size()) {
            int MaxIndex = ParentIndex;

            if (vect.at(LeftChildIndex) > vect.at(ParentIndex)) {
                MaxIndex = LeftChildIndex;
            }
            if (RightChildIndex < vect.size() && vect.at(RightChildIndex) > vect.at(ParentIndex)) {
                MaxIndex = RightChildIndex;
            }

            //Now , Performing the Swapping Operation :
            int temp = vect.at(ParentIndex);
            vect.at(ParentIndex) = vect.at(MaxIndex);
            vect.at(MaxIndex) = temp;

            //New Parent Index :
            ParentIndex = MaxIndex;
            LeftChildIndex = 2 * ParentIndex + 1;
            RightChildIndex = 2 * ParentIndex + 2;

            //Then the Process repeats again , and we have to return to the While Loop .
        }
        return answer ;
    }
};
