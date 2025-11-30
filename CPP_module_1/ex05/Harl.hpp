#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <bits/stdc++.h> 
#include <iomanip>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain( std::string level );
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};