#include<iostream>
using namespace std;

void search(int arr[],int value,int index,int size,bool &found){
    if(index>size-1){
        return;
    }
    int i;
   
    if(arr[index]==value){
        found=true;
     cout<<"found at index"<<" "<<index;
     return;
    }
   
    search(arr,value,index+1,size,found);
  
}
int main(){
    int arr[]={1,2,3,4,5};
    bool found=false;
    search(arr,3,0,5,found);
    if(!found){
        cout<<"not found"<<endl;
    }
}

