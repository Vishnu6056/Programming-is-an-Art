// C++ program to find the size of int, char,
// float and double data types
#include <iostream>
using namespace std;
int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;
	cout << "Size of int is: " <<sizeof(integerType) <<"\n";
	cout << "Size of char is: " <<sizeof(charType) <<"\n";
	cout << "Size of float is: " <<sizeof(floatType) <<"\n";
	cout << "Size of double is: " <<sizeof(doubleType) <<"\n";
  return 0;
}
