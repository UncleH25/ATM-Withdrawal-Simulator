#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

int main()
{
    //Variables
    double balance = 0.0;
    double withdrawal = 0.0;
    double fee = 0.0;
    char choice;

    //Input
	cout << "Enter your current balance: R";
	cin >> balance;

	//Validate balance input
	assert(balance >= 0.0);


    return 0;
}
