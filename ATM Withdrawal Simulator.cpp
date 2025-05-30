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

	//Do-while loop for ATM withdrawal simulation while choice equals 'y' or 'Y'
    do 
    {
		cout << "\nATM Withdrawal Simulator\n";
        cout << "-------------------------\n";
		//Display current balance
        cout << "Current Balance: R" << fixed << setprecision(2) << balance << endl;
		//Input withdrawal amount
        cout << "Enter withdrawal amount (or 0 to exit): R";
        cin >> withdrawal;

		//If withdrawal is 0, exit the loop
        if(withdrawal == 0) 
        {
            cout << "Exiting the ATM Withdrawal Simulator.\n";
            break;
		}

		//If withdrawal is greater than balance, display error
        if (withdrawal > balance)
        {
            cout << "ERROR INSUFFICIENT FUNDS\n";
        }
        //Else balance greater than or equal to withdrawal
        else
        {
			//Deduct withdrawal amount from balance
            balance -= withdrawal;

			cout << fixed << setprecision(2);

			//Display new balance after withdrawal
			cout << "Withdrawal Successful. New Balance: R" << balance << endl;

            //Calculate fee based on withdrawal amount
            if (withdrawal < 100.0)
            {
                fee = 2.0;
            }
            else if (withdrawal < 200.0)
            {
                fee = 3.0;
            }
            else
            {
                fee = 5.0;
			}
		} 

		//Output of withdrawal summary
        cout << "Withdrawal Amount: R" << withdrawal << endl;
        cout << "Transaction Fee: R" << fee << endl;
		cout << "Total Deducted: R" << (withdrawal + fee) << endl;
		cout << "Remaining Balance: R" << balance << endl;

		//Prompt the user to continue or exit
        cout << "Do you want to make another withdrawal? (y/n): ";
		cin >> choice;

    } while (choice == 'y' || choice == 'Y');


    return 0;
}
