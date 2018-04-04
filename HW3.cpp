#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
T getArrayElement(const T[],int,int) throw(overflow_error);

int main()
{
	double array[10]={5.2};
	int len=sizeof(array)/sizeof(array[0]);
	int index=0;
	cin>>index;
	try
	{
		cout<<getArrayElement(array,len,index)<<endl;
	}
	catch(overflow_error o)
	{
		cout<<o.what();
	}
	return 0;
}

template <typename T>
T getArrayElement(const T array[],int len,int index) throw(overflow_error)
{
	if(0<=index&&index<len)
		return array[index];
	else
		throw overflow_error("Bad index!\n");
}