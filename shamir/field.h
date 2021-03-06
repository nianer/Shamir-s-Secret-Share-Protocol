#ifndef FIELD_H
#define FIELD_H

#include <iostream>

using namespace std;
 
class prime{
public:
	int num_p;
	prime();
	prime(int p);
	bool isprime(int p);
	~prime(){
		//cout << "Delete prime" << endl;
	}
};
 
class field_Zp
{
public:
	int Fp;
	field_Zp();
	field_Zp(prime p);
	int modp(int num);        // Compute num mod p
	int neg_ele(int num);     // Find the negative element of a number
	int power(int a, int b);  // Compute (a^b) mod p using fast power algorithm 
	int inverse(int num);     // Find the inverse element of a number using Fermat's little theorem
	int add(int a, int b);    // addtion a + b
	int sub(int a, int b);    // subtraction a - b
	int mul(int a, int b);    // multiplication a * b
	int div(int a, int b);    // division a / b

};

#endif