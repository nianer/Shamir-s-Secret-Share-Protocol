#include <iostream>
#include "field.h"
 
using namespace std;

prime::prime(){
	cout << "here is prime() 1" << endl;
}
prime::prime(int p){
	cout << "here is prime() 2" << endl;
}
bool prime::is_prime(int p){
	cout << "here is is_prime()" << endl;
	return true;
}

field_Zp::field_Zp(){
	cout << "here is field_Zp()" << endl;
}

field_Zp::field_Zp(int p){
	if(p%2 == 0){
		cout << "p is not sushu!" << endl;
	}
	else{
		this->p = p;
	}
}