#include <iostream>

#include "poly.h"

using namespace std;

poly::poly(){
	this->n = 10;
	this->p = field_Zp();
	for(int i = 0; i < this->n; i++){
		int j = i + 1;
		this->a.push_back(this->p.modp(j));
	}

}
poly::poly(int n, int a[], field_Zp fp):n(n), p(fp)
{
	for(int i = 0; i < this->n; i++){
		this->a.push_back(this->p.modp(a[i]));
	}
}
poly::poly(int n, vector<int> v, field_Zp fp):n(n), p(fp), a(v)
{
}

poly::poly(int n, vector<int> v):n(n), a(v)
{
	this->p = field_Zp();
}

int poly::f(int x){
	int len = this->a.size();
	int output = 0;
	for(int i = 0; i < len; i++){
		output += a.at(i) * p.power(x,i);
	}
	return p.modp(output);
}

void poly::print(){
	cout << "***************************" <<endl;
	cout << "n = " << this->n << endl;
	cout << "p = " << this->p.Fp << endl;
	cout << "a = ";
	for(int i = 0; i < this->a.size(); i++){
		cout << this->a.at(i) << " ";
	}
	cout << endl;
	cout << "***************************" <<endl;
}

shamir_poly::shamir_poly(int s): s(s), poly()
{
	int sec = getsecret();
	this->a.at(0) = sec;
}