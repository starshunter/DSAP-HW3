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
}
class superVIP:public customer
{

};
class VIP:public customer
{

};
class normal:public customer
{

};
