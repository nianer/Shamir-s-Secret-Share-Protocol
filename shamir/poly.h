#ifndef POLY_H
#define POLY_H

#include <iostream>
#include <vector>
#include "field.h"
 
using namespace std;
class field;
class poly{

public:
	int n;
	field_Zp p;          // mod p
	std::vector<int> a;  //f(x)=a0+a1*x^1+...+a_(n-1)*x^(n-1) 

	poly();              //hard-code a poly, n = 10, p = 137, a = 1 2 3 4 5 6 7 8 9 10
	poly(int n, int a[], field_Zp fp);
	poly(int n, vector<int> v, field_Zp fp);
	poly(int n, vector<int> v);
	int f(int x);        // compute f(x)
	void print();        //print n,p,a

};

class shamir_poly: public poly
{
private:
	int s;
public:
	shamir_poly(int s);
	int getsecret(){
		return this->s;
	}

};

#endif