#include<iostream>
using namespace std;
    int gcd(int a , int b){
       int c;
    	if (a%b==0){
    		
    		cout<< b << " is the greatest common factor of the numbers you entered"<<endl;
    		return b;
		}
		else {
			c= a%b;
		gcd(b , c);
		}
		}
int main(){
	int e, f, gcf;
	int c;
	cout<<" Welcome To Greatest Common Divisor Program"<<endl;
	cout<<" Please Enter The First Number : ";
	cin>> e;
	cout<<" Please Enter Second Number : ";
	cin>>f;
	if(e >= f){
	
      gcd(e, f)	;
	}
	else if( e< f){
	  gcd(f,e);
	}
	else {
		cout<<" Wrong Inputs"<<endl;
	}
	
	
	return 0;
}
