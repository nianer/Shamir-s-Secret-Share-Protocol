#include <iostream>

using namespace std;

class prime{
public:
	int num_p;
	prime();
	prime(int p);
	bool is_prime(int p);
};
 
class field_Zp
{
public:
	int p;
	field_Zp();
	field_Zp(int p);

};