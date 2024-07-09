#include <iostream>
#include <string>
#include <vector>

#include "program.h"

using namespace std;

int main() {

	std::string code = "22a$ 3 3";

	program::lexer lexer(code);

	std::vector<std::string> tokens = lexer.lex();

	for (std::string token : tokens) {
		std::cout << token << std::endl;
	}

	return 0;

}