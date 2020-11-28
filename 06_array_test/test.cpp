#include <iostream>
#include <cstdlib>

using namespace std;


// исправляет перенос символов на следующую строку, когда координата увеличивается на единицу
const int size = 11;
const int field_size = size - 1;
char field[size][size];


void init_field() {
	for (int x = 0; x < field_size; ++x) {
		for (int y = 0; y < field_size; ++y) {
			field[x][y] = '.';
		}
	}
}


void change(int x, int y) {
	field[x+1][y]   = 'y';
	field[x]  [y+1] = 'x';
	field[x+1][y+1] = 'z';
}


void display() {
	system("clear");
	for (int x = 0; x < 2; ++x) {
		for (int y = 0; y < field_size; ++y) {
			if (x == 1) {
				cout << "=" << " ";
			} else {
				cout << y << " ";
			}
		}
		cout << "\n";
	}

	for (int x = 0; x < field_size; ++x) {
		for (int y = 0; y < field_size; ++y) {
			cout << field[x][y] << " ";
		}
		cout << "| " << x;
		cout << "\n";
	}
	cout << "\n";
}

int main () {
	
	init_field();
	
	int x, y;
	do {
		display();
		cout << "[x,y] = ";
		cin >> x >> y;	
		change(x, y);
	} while (true);

	return 0;
}
