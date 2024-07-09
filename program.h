#pragma once

#include <string>
#include <vector>

namespace program {
	class lexer
	{
	public:
		lexer(const std::string& input);
		~lexer() = default;
		std::vector<std::string> lex();

	private:
		std::string code;
		size_t len;
		std::string token;
		std::vector<std::string> tokens;
	};
}