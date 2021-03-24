#include <iostream>
#include <iomanip>
#define k 0.8
double* filter(double* input, double* output) {
	for (int i = 0; i < 10; i++) {
		if (i == 0)output[i] = input[i];
		else output[i] = output[i - 1] * k + input[i] * (1 - k);
	}
	return output;
}

int main()
{
	double input[10];
	double output[10];
	for (int i = 0; i < 10; i++) {
		std::cin >> input[i];
	}
	filter(input, output);

	for (int i = 0; i < 10; i++) {
		std::cout << std::fixed << std::setprecision(6) << output[i]<<std::endl;
	}
}