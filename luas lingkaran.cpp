#include <iostream>
using namespace std;

int main(){
	int r;
	float phi=3.14,luas,keliling;
	cout<<"masukan jari jari : ";
	cin>>r;
	
	luas=phi*r*r;
	keliling=phi*(2*r);
	cout<<"maka luas lingkaran : "<<luas<<endl;
	cout<<"maka keliling lingkaran: "<<keliling;

	return 0;
}
