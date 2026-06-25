#include<iostream>
using namespace std;

void count(int num,int counts){
    if(num==0){
        cout<<counts;
        return;
    }
     
   
   int rem= num/10;
   count(rem,counts+1);
}
int main(){
    int num=12345;
    int counts=0;
    count(num,counts);
 
}