#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
public:
	Book();
	Book(std::string pname, std::string pfav_food);
	std::string name;
	std::string species;
	std::string type;
	std::string fav_food;
	void treat(int fav_food_quantity);
	~Book();
};
#endif
