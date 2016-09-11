#include <iostream>
#include "windows.h"

using namespace std;

class oop1{
public: char a[20];
		void hitler() {
			cout << "Where are you from?" << endl;
			cin >> a;
			cout << "You live in " << a << endl;
		}
};

void main() {
	oop1 apple;
	apple.hitler();
	system("pause");
}