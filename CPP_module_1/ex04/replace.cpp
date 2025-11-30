#include "global.hpp"


std::string	replace_string( std::string og_str, std::string s1, std::string s2)
{
	size_t		pos;
	int			cursor = 0;
	std::string	result = "";

	pos = og_str.find(s1, cursor);
	while (pos != std::string::npos)
	{
		result.append(og_str.substr(cursor, pos - cursor));
		result.append(s2);
		cursor = (pos + s1.size());
		pos = og_str.find(s1, cursor);
	}
	if (cursor < (int)og_str.size())
		result.append(og_str.substr(cursor, og_str.size() - cursor));
	return (result);
}