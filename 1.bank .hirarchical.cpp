/*1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/

#include<iostream>
using namespace std;

class RBI{
	public:
		void getRO1(){
		cout<<"class RBI"<<endl;
	}
};
class SBI:public RBI{
	public:
	void getROI2(){
		cout<<"class SBI"<<endl;
	}
};
class BOB:public RBI{
	public:
	void getROI3(){
		cout<<"class BOB"<<endl;
	}
};
class ICICI:public RBI{
	public:
	void getROI4(){
		cout<<"class ICICI"<<endl;
	}
};
main(){
	SBI obj1;
	BOB obj2;
	ICICI obj3;
	
	obj1.getRO1();
	obj1.getROI2();
	
	obj2.getRO1();
	obj2.getROI3();
	
	obj3.getRO1();
	obj3.getROI4();
}

