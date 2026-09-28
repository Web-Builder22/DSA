#include<iostream>
using namespace std;



class stack{
	public:
		int top;
		int arr[5];
		stack(){
			top=-1;
		}
		void push(int val){
			if(top==4){
				cout<<"stack overflow"<<endl;
				return;
			}
			top++;
			arr[top]=val;
		}
		void pop(){
			if(top==-1){
				cout<<"stack underflow"<<endl;
				return;
			}
			top--;
			
		}
		int peek(){
			if(top==-1){
				cout<<"stack is empty"<<endl;
				return 0;
			}
			return arr[top];
		}
		
};
int main(){
   stack s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   
   s.pop() ;
   s.push(50);
  
   	int sa=s.peek();
   	cout<<sa;
   
}