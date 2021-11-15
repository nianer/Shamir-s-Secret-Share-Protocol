#include <iostream>
#include "field.h"
 
using namespace std;
 
int main()
{
	
	int m = 13;
	prime n = prime(m);
	field_Zp F1 = field_Zp();
	field_Zp F2 = field_Zp(n);
	cout << F2.neg_ele(22) << endl;
	cout << F2.power(11,333) << endl;
	for(int i = 1; i < 13; i++)
		cout << i << " : "  << F2.inverse(i) << endl;
	cout << "5 + 6 = " << F2.add(5,6) << endl;
	cout << "5 - 6 = " << F2.sub(5,6) << endl;
	cout << "5 * 6 = " << F2.mul(5,6) << endl;
	cout << "5 / 6 = " << F2.div(5,6) << endl;
	cout << "Success !!" <<endl;
	return 0;
} 