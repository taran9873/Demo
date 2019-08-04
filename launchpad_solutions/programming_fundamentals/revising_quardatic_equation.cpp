#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a ;
	cin>> a ;
	double b;
	cin>> b;
	double c;
	cin>> c;
	double x,y; //roots of equation
	double d = (b*b)-4*a*c;
	x = (-b-sqrt(d))/2*a;
	y = (-b+sqrt(d))/2*a;
	if(d >0){
	    cout<<"Real and Distinct"<<endl;
	    cout<<x<<" "<<y;
	}
	else if(d ==0){
	    cout<<"Real and Equal"<<endl;
	    cout<<x<<" "<<y;
    	
	}
	else{
	    cout<<"Imaginary"<<endl;
	    
	}
}
