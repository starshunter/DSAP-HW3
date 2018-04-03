#include <iostream>
using namespace std;

class instrument
{
protected:
	int risk;
	int premium;
	int quantity;
};
class stock:public instrument
{

};
class bond:public instrument
{

};
class fund:public instrument
{

};
class insurance:public instrument
{

};
class customer
{
protected:
	int cnt;
	int capacity;
	string name;
	instrument **instrumentPtr;
public:
	virtual void optimize()=0;
};
class superVIP:public customer
{
public:
	void optimize();
};
class VIP:public customer
{
public:
	void optimize();
};
class normal:public customer
{
public:
	void optimize();
};
class bank
{
private:
	int cus_cnt;
	customer **cus_ptr;
public:
	void optimize();
};