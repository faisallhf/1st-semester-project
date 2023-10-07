#include<iostream>
#include<cstring>
using namespace std;
struct bank
{
	int x;
	int select;
	char name[50];
	double acno=0;
	int deposit=0;
	char type;
};

void menu()
{
	cout << "\t\t\t----------------------------------------------" << endl;
	cout << "\t\t\t\tWELCOME TO BANK MANAGEMENT SYSTEM" << endl;
	cout << "\t\t\t----------------------------------------------" << endl;
	cout << "\t\t\t----------------------------------------------" << endl;
	cout << "\t\t\t\t     '<<' MAIN MENU '>>'" << endl;
	cout << "\t\t\t----------------------------------------------" << endl;
	cout << "\n\n01-" << "NEW ACCOUNT" << endl;
	cout << "02-" << "DEPOSIT AMOUNT" << endl;
	cout << "03-" << "WITHDRAW AMOUNT" << endl;
	cout << "04-" << "BALANCE INQUIRY" << endl;
	cout << "05-" << "Display Account" << endl;
	cout << "06-" << "MODIFY AN ACCOUNT" << endl;
	cout << "07-" << "EXIT" << endl;
	cout << "SELECT YOUR OPTION :" << " " << "(" << "1-7" << ")" << endl;
}



int  main()
{
	bank b;
	menu();
	do
	{
        
		cin >> b.select;
		if (b.select == 1)
		{
			
			
			cout << "\nEnter The account No. : ";
			cin >> b.acno;
			cout << "\n\nEnter The Name of The account Holder : ";
			cin.ignore();
			cin.getline(b.name, 50);
			cout << "\nEnter Type of The account (Current/Saving) : ";
			cin >> b.type;
			b.type = toupper(b.type);
			cout << "\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
			cin >> b.deposit;
			cout << "\n\n\nCongratulation your Account has been Created...";
		}
		
		
		else if (b.select == 2)
		{
        
			cout << "Enter Amount to Deposit: " << endl;
			cin >> b.x;   //1000
			b.deposit += b.x;
			cout << "Amount Deposited Successfully..." << endl;
		}
		else if (b.select == 3)
		{
		
			cout << "Enter Amount to Withdraw: " << endl;
			cin >> b.x;
			b.deposit -= b.x;
			cout << "Amount Withdraw Successfully..." << endl;
		}
		else if (b.select == 4)
		{
		
			cout << "BALANCE INQUIRY" << endl;
			cout << "Your Name is " << b.name << " and Your Total Amount is " << b.deposit;

		}
		else if (b.select == 5)
		{
		
			cout << "Display Account:" <<endl;
			cout << "\nAccount No. : " << b.acno;
			cout << "\nAccount Holder Name : " << b.name;
			cout << "\nType of Account : " << b.type;
			cout << "\nBalance amount : " << b.deposit;
		}
		
		
		

		else if (b.select == 6)
		{
			int num;
			
			cout << "MODIFY YOUR ACCOUNT" << endl;
			cout << "Enter Account Number: " << endl;
			cin >> num;
			if (num == b.acno)
			{
				
				cout << "\nAccount No. : " << b.acno;
				cout << "\nModify Account Holder Name : ";
				cin.ignore();
				cin.getline(b.name, 50);
				cin.ignore();
				cout << "\nModify Type of Account : ";
				cin >> b.type;
				b.type = toupper(b.type);
				cout << "\nModify Balance amount : ";
				cin >> b.deposit;
				cout << "Account Modified Successfully... ";
			}
			
			
			else
			{
				cout << "NO Record found";
			}
		}
		else if (b.select == 7)
		{
			cout << "\n\n\t\tThanks for using Bank Management System"<<endl;
			break;

		}
		else
		{
			cout << "INVALID NUMBER" << endl;
		}
	} while (b.select != '7');
      system("pause");
      return 0;
}
