//2. WAP to perform four different number’s sum by inheriting constructors in hybrid inheritance.
#include<iostream>
using namespace std;

class sum{
		public:
		int x,y,z;
		void sd(){
			cout<<endl;
			cout<<"enter value x:";
			cin>>x;
			cout<<"enter value y:";
			cin>>y;
			cout<<"enter value z:";
			cin>>z;
			cout<<endl;
		}
		void gd(){
		
			cout<<"value of x"<<x<<endl;
			cout<<"value of y"<<y<<endl;
			cout<<"value of z"<<z<<endl<<endl;
		}
};
class sum1:public sum{
	public:
		int sum1;
		void sd1(){
		sum1=x+y;
		}
		void gd1(){
		cout<<"sum1="<<sum1<<endl;
		}
};
class sum2:public sum{
	public:
		int sum2;
		void sd2(){
			sum2=y+z;
		}
		void gd2(){	
				cout<<"sum2="<<sum2<<endl;

		}
	};
class sum3:public sum{
	public:
		int sum3;
		void sd3(){
			sum3=x+z;
		}
		void gd3(){
			cout<<"sum3="<<sum3<<endl;
		}
		};
main(){
	sum1 obj1;
	sum2 obj2;
	sum3 obj3;
	
	obj1.sd();
	obj1.gd();
	obj1.sd1();
	obj1.gd1();
	
	obj2.sd();
	obj2.gd();
	obj2.sd2();
	obj2.gd2();
	
	obj3.sd();
	obj3.gd();
	obj3.sd3();
	obj3.gd3();
	
}
