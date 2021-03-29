#include <iostream>
#include <iomanip>
#define k 0.8
double filter(double input, double output) {
	
	 output = output * k + input * (1 - k);
	
	return output;
}

int main()
{
	double input[10];
	
	for (int i = 0; i < 10; i++) {
		std::cin >> input[i];
	}
	double output = input[0];

	for (int i = 1; i < 10; i++) {
		output=filter(input[i], output);
		std::cout << std::fixed << std::setprecision(6) << output << std::endl;
	}
}