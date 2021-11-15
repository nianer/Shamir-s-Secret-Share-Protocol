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
	cout << "Success !!" <<endl;
	return 0;
} 