// c++ program for login to patricular site
# include<iostream>
using namespace std;
int main()
{
	char name;
	int pass_code;
	cout<<"\n Enter the name : ";
	cin>>name;
	if(name='MyCaptain')
	{
		if(pass_code== 1234)
		{
			cout<<" LOGIN SUCCESSFUL !!! ";
		}
		else
		{
			cout<<" INCORRECT LOGIN DETAILS ??? ";
		}
	}
return 0;
}
