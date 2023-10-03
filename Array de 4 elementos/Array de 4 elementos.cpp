#include<iostream>

int main() {
	char c[] = { 'L', 'u', 'i', 's' };

	std::cout << "Contenido del array c: ";
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
		std::cout << c[i];

	}
	std::cout << std::endl;


	system("pause");
	return 0;
}