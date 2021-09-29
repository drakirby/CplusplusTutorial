#include <iostream>
#include <string>
using namespace std;

/*
 *Write (or try to emulate, if your language doesn’t have them)
 *different kinds of loops: while, do/while, for, foreach
 */

void whiletest(){

	int a = 0;
	while (a < 3){
		cout << a << "\n";
		a++;
	}
}

void dowhiletest(){

	int b = 0;
	do {
	  cout << b << "\n";
	  b++;
	}
	while (b < 3);
}

void fortest(){

	for (int i = 0; i < 3; i++) {
	  cout << i << "\n";
	}
}

void foreachtest(){

	int testarray[] = {0, 1, 2};
	for (int i : testarray){
		cout << i << "\n";
	}
}

/*
 * Write a function that takes in two numbers, multiplies them, and returns the output
 */

void multiply(){

	int c;
	int d;

	cout << "give me a number: ";
	cin >> c;
	cout << "give me another number: ";
	cin >> d;

	int e = c * d;

	cout << "multiplied, that's " << e << "\n";
}

/*
 * Write a recursive function (one that calculates a factorial is fine)
 */

void factorial(){

	int f;
	double factorial = 1.0;

	cout << "give me a number: ";
	cin >> f;

	for(int g = 1; g <= f; ++g) {
		factorial *= g;
	}

	cout << "the factorial of " << f << " is: " << factorial;
}


/*
 * Write a function that takes in a string (or your language's equivalent)
 * and splits it into two strings, then returns both strings
 */

void stringsplit(){

	string h = "test string";
	string i = h.substr (5);
	string j = h.substr(0, 4);
	cout << i << " " << j;
}

/*
 *Write a function that tests whether your language is pass-by-reference or pass-by-value.
 */

void valcounter(int k){
	k = k + 1;
}

int valtester(){
	int k = 0;
	valcounter(k);
	cout << k;
	return 0;
}

void refcounter(int & k){
	k = k + 1;
}

int reftester(){
	int k = 0;
	refcounter(k);
	cout << k;
	return 0;
}

//main----------------------------------------------------------------------------------------
int main(){
	cout << "while test:\n";
	whiletest();
	cout << "\n";

	cout << "do/while test:\n";
	dowhiletest();
	cout << "\n";

	cout << "for test:\n";
	fortest();
	cout << "\n";

	cout << "for/each test:\n";
	foreachtest();
	cout << "\n";

	cout << "multiply test:\n";
	multiply();
	cout << "\n";

	cout << "factorial/recursive test:\n";
	factorial();
	cout << "\n";

	cout << "splitting strings test:\n";
	stringsplit();
	cout << "\n";

	cout << "pass by value vs pass by reference:\n";
	cout << "value:\n";
	valtester();
	cout << "\n";
	cout << "reference:\n";
	reftester();
	cout << "\n";


}
