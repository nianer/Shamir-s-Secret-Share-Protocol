#include <iostream>
#include <assert.h>
#include "field.h" 
  
using namespace std;

prime::prime(){
	this->num_p = 137;
}
prime::prime(int p){
	assert(this->isprime(p));
	this->num_p = p;
/*	try {
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
    }*/
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

int field_Zp::modp(int num){
	return num % this->Fp;
}

int field_Zp::neg_ele(int num){
	return modp(this->Fp - modp(num));
}

int field_Zp::power(int a, int b)
{
    int ans = 1;
    a = modp(a);
    while(b > 0)
    {
        if(b % 2 == 1) 
            ans = modp(ans*a);
        b = b / 2;  
        a = modp(a*a);
    }
    return ans;
}
int field_Zp::inverse(int num){
	num = modp(num);
	return power(num,Fp-2);
}
int field_Zp::add(int a, int b){
	a = modp(a);
	b = modp(b);
	return modp(a+b);
}
int field_Zp::sub(int a, int b){
	a = modp(a);
	b = neg_ele(b);
	return modp(a+b);
}
int field_Zp::mul(int a, int b){
	a = modp(a);
	b = modp(b);
	return modp(a*b);
}
int field_Zp::div(int a, int b){
	a = modp(a);
	b = inverse(b);
	return modp(a*b);
}