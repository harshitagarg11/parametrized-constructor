#include <iostream>
#include <conio.h>
using namespace std;
class A{
	public:
		int a,b,c;
		A(int a1,int b1){
			a=a1;
			b=b1;
		}
		void sum(){
			c=a+b;
			cout<<"c:"<<c;
			
		}
	};
	int main(){
		A obj(10,20);
		obj.sum();
		
	}
