#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {

	system("clear");
	
	cout << "enter game number: ";
	int value;
	while (cin >> value) 
	{
	        srand(value);	
		for (int i = 1; i <= 10; i++) {
			cout << 1 + rand() % 10 << endl;
		}
		cout << endl;
	}

	return 0;
}
