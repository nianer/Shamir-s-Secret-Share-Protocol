#include <iostream>

using namespace std;

class field_Zp
{
public:
	int p;
	field_Zp(int p){
		if(p%2 == 0){
			cout << "p is not sushu!" << endl;
		}
		else{
			this->p = p;
		}
	}

};