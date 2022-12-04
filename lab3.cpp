//Q) //odd/even
#include <iostream>
using namespace std;
int main() {

	int a;
	cout<<"Enter any number: ";
	cin>>a;
	if(a%2==0)
	{
	 	cout<<"Entered number is Even";
	}
	else
	{
	  	cout<<"Entered number is Odd";
	}

    return 0;
}

//Q)leap year
#include <iostream>
using namespace std;
int main() {

	int year;
	cout<<"Enter any year: ";
	cin>>year;
	if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      {
          cout<<year<<" is a leap year";
      }   
   else
      {
          cout<<year<<" is a not leap year";
      }

    return 0;
}
