# include<iostream>
using namespace std;
int main()
{
   int element[5];
   cout << "Enter elements: ";
   for(int a = 0; a < 5; ++a)
      cin >> element[a];
	  cout << "You entered: ";
   for(int a = 0; a < 5; ++a)
      cout << endl << *(element + a);
	return 0;
}
