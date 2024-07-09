#include "program.h"

namespace program {
	lexer::lexer(const std::string& input)
	{
		code = input;
		len = code.length();
		
		tokens = std::vector<std::string>();
	}

	std::vector<std::string> lexer::lex()
	{
		for (char c : code)
		{
			if (isdigit(c)) {
				if (!token.empty() && !isdigit(token.back())) {
					tokens.push_back(token);
					token.clear();
				}

				token += c;
			}
			else if (isalpha(c)) {
				if (!token.empty() && !isalpha(token.back())) {
					tokens.push_back(token);
					token.clear();
				}

				token += c;
			}
			else if (c == ' ' || c == '\t')
			{
				continue;
			}
			else
			{
				if (!token.empty()) {
					tokens.push_back(token);
					token.clear();
				}

				token = c;
				tokens.push_back(token);
				token.clear();
			}
		}

		if (!token.empty()) {
			tokens.push_back(token);
		}

		return tokens;
	}
}