#include <iostream>
#include<string>
using namespace std;
struct Date
{
	int month;
	int day;
	const int year = 2020;
};
struct Line
{
	string mobile_number;
	string package_type;
	float balance;
	Date date;
	int renewel_date;
};
struct user
{
	int id;
	string email;
	string name;
	string password;
	string address;
	Line line[3];
};
void renew(user data, string mobile_number);
void call(user data, string mobile_number);
void recharge(user data, string card_serial_number);
void transfer(user data, string mobile_number);
void message(user data, string mobile_number);
void subscribe(user data, float balance);

int main()
{
	user data;
	int Number_of_lines;
	cout << "\t\t\t\t [Welcome to the system] \n" << endl;
	cout << "enter user id" << endl;
	cin >> data.id;
	cout << "enter user email" << endl;
	cin >> data.email;
	cout << "enter user name" << endl;
	cin >> data.name;
	cout << "enter user password" << endl;
	cin >> data.password;
	cout << "enter user address " << endl;
	cin >> data.address;
	cout << "enter Number of lines" << endl;
	cin >> Number_of_lines;
	if (Number_of_lines <= 3)
	{
		for (int i = 0; i < Number_of_lines; i++)
		{
			cout << " enter mobile_number  " << "for line\t " << i + 1 << endl;
			cin >> data.line[i].mobile_number;
			cout << "enter package type" << "for line\t " << i + 1 << "\t" << endl;
			cin >> data.line[i].package_type;
			cout << "enter balance" << "for line\t " << i + 1 << "\t" << endl;
			cin >> data.line[i].balance;
			cout << "enter current month" << "for line\t " << i + 1 << "\t" << endl;
			cin >> data.line[i].date.month;
			cout << "enter current day" << "for line\t " << i + 1 << "\t" << endl;
			cin >> data.line[i].date.day;
		}
	}
	else
	{
		cout << "not allowed" << endl;
	}
	void show_informations(user data, int Number_of_lines);
	cout << "to show your info enter 1 to continue enter 0 " << endl;
	int check;
	cin >> check;
	if (check == 1)
	{
		show_informations(data, Number_of_lines);
	}
	cout << "1-To renew enter 1 \n2-To Make call  enter 2 \n3- Charge enter 3 \n4-To transfer 4 \n5- To send message enter 5\n6-To subscribe enter6\nEnter your choise : ";
	int test;
	cin >> test;
	switch (test)
	{
	case 1:
		void renew(user data, string mobile_number);
		{
			string mobile_number;
			renew(data, mobile_number);
		}
		break;
	case 2:
		void call(user data, string mobile_number);
		{
			string mobile_number;
			cout << "enter your mobile number" << endl;
			cin >> mobile_number;
			call(data, mobile_number);
		}
		break;
	case 3:
		void recharge(user data, string card_serial_number);
		{
			string card_serial_number;
			cout << "enter your card serial number" << endl;
			cin >> card_serial_number;
			recharge(data, card_serial_number);
		}
		break;
	case 4:
		void transfer(user data, string mobile_number);
		{
			string mobile_number;
			cout << "enter your mobile number"<<endl;
			cin >> mobile_number;
			cout << "enter your balance"<<endl;
			transfer(data, mobile_number);
		}
		break;
	case 5:
		void message(user data, string mobile_number);
		{
			string mobile_number;
			cout << "enter your mobile number" << endl;
			cin >> mobile_number;
			message(data, mobile_number);
		}
		break;
	case 6:
		void subscribe(user data, float balance);
		{
			string mobile_number;
			cout << "enter your mobile number" << endl;
			cin >> mobile_number;
			for (int i = 0; i <= 3; i++)
			{
				if (mobile_number == data.line[i].mobile_number)
				{
					cout << "your balance=" << data.line[i].balance << endl;
				}
			}
			cout << "enter 1 to subscribe in A is  1-300 mb for 20 le \n enter 2 to subscribe in b is 2-400 mb for 30 le \n enter 3 to subscribe in c is 3-500 mb for 40 le\n enter your choice :";
			int check;
			cin >> check;
			switch (check)
			{
			case 1:
				cout << "you subscribed in A" << endl;
				break;
			case 2:
				cout << "you subscribed in b" << endl;
				break;
			case 3:
				cout << "you subscribed in c" << endl;
				break;
			default:
				cout << "invalid";
				break;
			}

			break;
		}
	}
}
void show_informations(user data, int Number_of_lines)
{
	for (int i = 0; i < Number_of_lines; i++)
	{
		cout << "your ID is \n: " << data.id << endl;
		cout << "your email is\n" << data.email << endl;
		cout << " your name is\n" << data.name << endl;
		cout << "your password is\n " << data.password << endl;
		cout << "your address is \n" << data.address << endl;
		cout << " your mobile_number  is \n" << "for line " << i + 1 << "\t" << data.line[i].mobile_number << endl;
		cout << "your package type is\n" << "for line" << i + 1 << "\t" << data.line[i].package_type << endl;
		cout << "your balance is\n " << "for line " << i + 1 << "\t" << data.line[i].balance << endl;
		cout << " the current day is\n " << "for line" << i + 1 << "\t" << data.line[i].date.day << endl;
		cout << "the current month is \n" << "for line" << i + 1 << "\t" << data.line[i].date.day << endl;
		cout << "the renewal line is\n " << "for line" << i + 1 << "\t" << data.line[i].renewel_date << endl;
		cout << "\n****************************************************************\n\n";
	}
}
void renew(user data, string mobile_number)
{
	cout << "do you want to renew your package enter 1";
	int check;
	cin >> check;
	if (check == 1)
	{
		string mobile_number;
		cout << "enter your mobile number" << endl;
		cin >> mobile_number;
		for (int i = 0; i <= 3; i++) 
		{

			if (mobile_number == data.line[i].mobile_number)
			{
				string new_package;
				cout << "enter new package number" << endl; 
				cin >> new_package;
				if (new_package == data.line[i].package_type)
				{
					cout << "you renewed succesfully" << endl;
				}
			}
			else 
			{
				break;
			}
		}
	}
}
void call(user data, string mobile_number)
{
	cout << "to make a call enter 2" << endl;
	int check;
	cin >> check;
	if (check == 2)
	{
		for (int i = 0; i <= 3; i++)
		{

			if (mobile_number == data.line[i].mobile_number)
			{
				cout << "enter the mobile number you want to call" << endl;
				cin >> data.line[i].mobile_number;
				float remind;
				cout << "enter your balance"<<endl;
				cin >> data.line[i].balance;
				remind = data.line[i].balance -= 1 * 0.25;
				cout << "your remind balance=" << data.line[i].balance;
			}
			else
			{
				break;
			}

		}
	}
	else
	{
		cout << "invalid" << endl;
	}
}
void recharge(user data, string card_serial_number)
{
	cout << "to recharge enter 3" << endl;
	int check;
	cin >> check;
	if (check == 3)
	{
		float money;
		cout << "enter the money in the card serial number" << endl;
		cin >> money;
		for (int i = 0; i <= 3; i++)
		{
			if (money == data.line[i].balance)
			{
				cout << "recharged successfuly" << endl;
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		cout << "invaid input" << endl;
	}

	}

void transfer(user data, string mobile_number)
{
	cout << "to transfer enter 4" << endl;
	int check;
	cin >> check;
	if (check == 4)
	{
		for (int i = 0; i <= 3; i++)
		{
			if (mobile_number == data.line[i].mobile_number)
			{

				cout << "enter the mobile number you want to transfer" << endl;
				cin >> data.line[i].mobile_number;
				float remind;
				float transfered_balance;
				cout << "enter the balance you want to transfer" << endl;
				cin >> transfered_balance;
				cout << "enter your balance"<<endl;
				cin >> data.line[i].balance;
				remind = data.line[i].balance -= transfered_balance;
				cout << "you transfered succsessfuly" << endl;
				cout << "your remind balance=" << data.line[i].balance << endl;
			}
			else
			{
				break;
			}

		}

	}
	else
	{
		cout << "innvalid" << endl;
	}
}
void message(user data, string mobile_number)
{
	cout << "to send a message enter 5" << endl;
	int check;
	cin >> check;
	if (check == 5)
	{
		for (int i = 0; i <= 3; i++)
		{

			if (mobile_number == data.line[i].mobile_number)
			{
				cout << "enter the mobile number you want to send a message" << endl;
				cin >> data.line[i].mobile_number;
				float remind;
				cout << "enter your balance"<<endl;
				cin >> data.line[i].balance;
				string message;
				cout << "enter the message" << endl;
				cin >> message;
				remind = data.line[i].balance -= 1 * 0.25;
				cout << "the message sent successfuly" << endl;
				cout << "your remind balance=" << data.line[i].balance << endl;
				
			}
			else
			{
				break;
			}

		}

	}
	else
	{
		cout << "invalid" << endl;
	}
}

