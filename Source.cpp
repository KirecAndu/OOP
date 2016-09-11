#include <iostream>
#include "windows.h"

using namespace std;

class oop1{
public: char a[20]; 
		int b;

		void hitler() {
			cout << "Where are you from?" << endl;
			cin >> a;
			cout << "You live in " << a << endl;
		}
		void adolf() {
			cout << "8 * 8 = " << 8*8 <<endl;
		}
};

void main() {
	oop1 apple;
	apple.adolf();
	apple.hitler();
	system("pause");
}