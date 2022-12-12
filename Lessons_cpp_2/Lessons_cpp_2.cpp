#include <iostream> 
#include <cassert> 

using namespace std;

int Factorial(int value) {
	if (value < 0) {
		return 0;
	}

	int fact = 1;
	for (int i = 1; i <= value; i++) {
		fact *= i;
	}
    
	return fact;
}

void Test() {
	assert(Factorial(3) == 6);
	assert(Factorial(1) == 1);
	assert(Factorial(0) == 1);
	assert(Factorial(-2) == 0);

}

int main() {

	Test();

	return 0;
}