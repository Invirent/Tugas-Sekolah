#include <iostream>

using namespace std;
//contoh
string to_biner(int num) {
	string s = "";
	int hasil = num;
	int sisa;
	while (hasil != 0) {
		sisa = hasil % 2;
		// cout << sisa << endl;
		string ss = to_string(sisa);
		// cout << ss << endl;
		s.insert(0, ss);
		// cout << s << endl;
		hasil = hasil / 2;
		// cout << hasil << endl;
	}
	return s;
}

string binary_convert(int input){
	string s = "";
	int hasil= input ;
	int sisa;
	
	if (hasil == 0)
	return s;

	else
	{
		sisa = hasil % 2;
		string ss= to_string(sisa);
		s.insert(0,ss);
		return binary_convert(input/2);
	}
	return s;
}
int main() {

	int num = 99;
	
	string bin = to_biner(num);
	string run = binary_convert(num);
	//contoh
	cout << num << " dalam sistem bilangan berbasis 10 = " << bin << " dalam sistem bilangan berbasis 2." << endl;
	cout << num << " dalam sistem bilangan berbasis 10 = " << run << " dalam sistem bilangan berbasis 2." << endl;
	return 0;	
}
