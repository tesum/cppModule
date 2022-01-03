#ifndef KAREN_H
#define KAREN_H

#include <iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void (Karen::*func[4])();
	public:
		Karen(/* args */);
		~Karen();
		void complain( std::string level );
};

#endif