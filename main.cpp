#include <iostream>
#include <string>

int main() {
	std::string heyPhrase = "";

	for (int i = 0; i < 20; i++) {
		heyPhrase += "hey ";		
   	std::cout << heyPhrase << " :" << i+1 << std::endl;
	}

	return 0;
}
