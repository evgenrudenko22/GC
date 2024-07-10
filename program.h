#pragma once

#include <string>
#include <vector>
#include <unordered_map>

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

	class parser
	{
	public:
		parser(std::vector<std::string>& tokens);
		~parser() = default;
		void parse()
	
	private:
		std::vector<std::string> tokens;
		size_t pos = 0;
		std::unordered_map<std::string, int> variables;
	}

}