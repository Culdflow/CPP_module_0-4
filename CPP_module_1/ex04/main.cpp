#include "global.hpp"


bool file_exists (const std::string& file_name)
{
	std::ifstream f(file_name.c_str());
	return f.good();
}

int main(int ac, char **argv)
{
	
	if (ac != 4)
	{
		std::cout << "wrong number of arguments must be 3" << std::endl;
		return 0;
	}
	if (!file_exists(argv[1]))
	{
		std::cout << "file doesn't exist or isn't able to be read" << std::endl;
		return 0;
	}
	std::string	file_contents;
	std::string	buffer;
	std::string new_f_contents;
	std::ifstream input(argv[1]);
	while (std::getline(input, buffer))
	{
		file_contents.append(buffer);
		file_contents.append("\n");
	}
	std::cout << "file contents: " << file_contents << std::endl;
	input.close();
	new_f_contents = replace_string(file_contents, argv[2], argv[3]);
	std::ofstream file;
	file.open(std::strcat(argv[1], ".replace"));
	file << new_f_contents;
	file.close();
}