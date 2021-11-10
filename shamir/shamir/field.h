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

};