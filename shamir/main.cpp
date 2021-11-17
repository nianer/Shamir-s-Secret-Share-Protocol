#include <iostream>
#include <vector>
#include "field.h"
#include "poly.h"
#include "random.h"
using namespace std;

int ff(int x){
	int ans = 0;
	ans = (8 + 5*x + 4*x*x +2*x*x*x+8*x*x*x*x+4*x*x*x*x*x);
	return ans%137;
}
 
int main()
{
	
	int m = 13;
	prime n = prime(m);

	field_Zp F1 = field_Zp();
	field_Zp F2 = field_Zp(n);
	cout << F2.neg_ele(22) << endl;
	cout << F2.power(11,333) << endl;

	poly p1 = poly();
	int a[6] = {8,5,4,2,8,4};
	poly p2 = poly(6,a,F2);
	std::vector<int> v;
	v.push_back(45);
	v.push_back(15);
	v.push_back(5);
	v.push_back(4);
	poly p3 = poly(v.size(),v,F2);
	poly p4 = poly(v.size(),v);
	p1.print();
	p2.print();
	p3.print();
	p4.print();
	cout << p2.f(0) <<" : "<< ff(0) << endl;
	cout << p2.f(1) <<" : "<< ff(1) << endl;
	cout << p2.f(2) <<" : "<< ff(2) << endl;
	cout << p2.f(3) <<" : "<< ff(3) << endl;
	shamir_poly sp = shamir_poly(6);
	sp.print();
	cout << sp.f(3) <<" : "<< ff(3) << endl;
	cout << "Success !!" <<endl;
	return 0;
} 