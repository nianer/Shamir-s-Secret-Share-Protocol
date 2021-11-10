#include <iostream>
#include "field.h"
  
using namespace std;

prime::prime(){
	this->num_p = 137;
}
prime::prime(int p){
	try {
		if(this->isprime(p)){
			this->num_p = p;
		}
		else{
			throw -1;
		}
    }
    catch(int t) {
    	cerr << "Initialization failed !" << endl;
    	cout << "p is not a prime number!" << endl;
    	delete this;
    }
}
bool prime::isprime(int p){
	for (int i = 2; i * i <= p; i++)
        if (p % i == 0)
            return false;
    return true;
}

field_Zp::field_Zp(){
	prime p = prime();
	this->Fp = p.num_p;
	cout << "module = " << this->Fp << endl;
}

field_Zp::field_Zp(prime p){
	this->Fp = p.num_p;
	cout << "module = " << this->Fp << endl;
}