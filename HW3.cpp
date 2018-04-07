#include <iostream>
#include <stdexcept>
#include <string>
#include <cstring>
using namespace std;

struct MyException: public runtime_error
{
    MyException(const string &s):runtime_error(s+" is not a valid password"){}
};

void create_account();

int main()
{
	bool success=false;
	while(!success)
	{
		try
		{
			create_account();
			success=true;
		}
		catch(MyException &e)
		{
			cout<<e.what()<<endl;
		}
	}
	return 0;
}

void create_account()
{
	string username,password;
	cout<<"Enter your username"<<endl;
	cin>>username;
	cout<<"Enter your password (It must contain at least one number and longer than 8)"<<endl;
	cin>>password;
	bool a=false;
	if(password.length()<8)
		throw(MyException(password));
	for(int i=0;i<password.length();i++)
		if(password[i]-48>=0&&password[i]-48<=9)
			a=true;
	if(!a)
		throw(MyException(password));
	
}