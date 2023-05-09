#include <iostream>
#include <fstream>
#include "FC.h"
#include "CITY.h"
using namespace std;

int main() {
	CITY seoul;
	for (int i = 0; i < 12; i++) {
		cin >> seoul.CF[i].c;
		cout << seoul.CF[i].getF() << endl;
	}

}
