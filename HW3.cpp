#include <iostream>
using namespace std;

class player
{
protected:
	int number;
	string position;
};

class pitcher:public player
{

};

class catcher:public player
{

};

class infielder:public player
{

};

class outfileder:public player
{

};

class team
{
private:
	player *member[9];
};