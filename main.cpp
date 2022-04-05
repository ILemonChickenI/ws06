#include <iostream>
#include "Book.h"
#include "Library.h"

using namespace std;

// main program
int main()
{
	Panda* wao, * dao;
	wao = new Panda("Wao", "bamboo");
	dao = new Panda("Dao", "japanese bamboo");
	wao->treat(3);
	dao->treat(4);
}
