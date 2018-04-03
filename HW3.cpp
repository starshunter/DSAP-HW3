#include <iostream>
using namespace std;

class player
{
protected:
	int number;
	string position;
	string name;
	int height;
	int weight;
public:
	virtual void print()=0;
};
class pitcher:public player
{
private:
	double ERA;
public:
	void print()
	{
		cout<<name<<" "<<height<<" "<<weight<<" "<<number<<endl;
		cout<<ERA<<endl;
	}
};
class catcher:public player
{
private:
	double CS;
	double FTCP;
public:
	void print()
	{
		cout<<name<<" "<<height<<" "<<weight<<" "<<number<<endl;
		cout<<CS<<" "<<FTCP<<endl;
	}
};
class infielder:public player
{
private:
	double FTCP;
public:
	void print()
	{
		cout<<name<<" "<<height<<" "<<weight<<" "<<number<<endl;
		cout<<FTCP<<endl;
	}
};
class outfileder:public player
{
	double FTCP;
public:
	void print()
	{
		cout<<name<<" "<<height<<" "<<weight<<" "<<number<<endl;
		cout<<FTCP<<endl;
	}
};
class team
{
private:
	player *member[1];
public:
	void print();
};
void team::print()
{
	for(int i=0;i<9;i++)
		member[i]->print();
}