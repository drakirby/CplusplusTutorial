#include <iostream>
using namespace std;

int main(){

	//single-condition if/else statement
	int x = 3;

	if (x == 3) {
		cout << "x is 3";
	} else if (x == 4) {
		cout << "x is 4";
	} else {
		cout << "x is something else";
	}

	//multi-condition if/else statement
	x = 3;
	int y = 4;
	int z = 5;

	if (x < y && y < z) {
		cout << "true";
	} else if (x > y && y > z) {
		cout << "false";
	} else {
		cout << "something else";
	}

	//short-circuiting
	y = 3;

	if (x == y || y == z) {
		cout << "true";
	} else {
		cout << "false";
	}

	//switch statements

	switch (x) {
	  case 1:
	    cout << "x is one";
	    break;
	  case 2:
	    cout << "x is two";
	    break;
	  case 3:
		cout << "x is three";
		break;
	  default:
	    cout << "x is a variable";
	}

	return 0;
}
