#include<iostream>
using namespace std;
class bank{
	public:
		int Balance;
		int Withdraw,Deposit;
		bank(){
			Balance=5000;
		}
		
		void withdraw(){
			cout<<"Enter amout to withdraw:";
			cin>>Withdraw;
			Balance=Balance-Withdraw;
			cout<<"Amount withdrawn Successfully"<<"\n";
		}
		void deposit(){
			cout<<"Enter amout to Deposit:";
			cin>>Deposit;
			Balance=Balance+Deposit;
			cout<<"Amount Deposited Successfully"<<"\n";
		}
		
		void balance(){
			cout<<"Balance:"<<Balance<<"\n";
		}
		
		
};
int main(){
	bank b;
	int pass;
	cout<<"Enter Password:";
	cin>>pass;
	if(pass==1234){
	
		int choice=1;
		
		while(choice!=4){
			cout<<"\n";
			cout<<"--------------------------\n";
			cout<<"1.Deposit"<<"\n";
			cout<<"2.withdraw"<<"\n";
			cout<<"3.Get Balance"<<"\n";
			cout<<"4.Exit"<<"\n";
			cout<<"--------------------------\n";
			cout<<"Enter the Choice: ";
			cin>>choice;
			cout<<"\n";
			
			switch(choice){
				case 1:
					b.deposit();
					break;
				case 2:
					b.withdraw();
					break;
				case 3:
					b.balance();
					break;
				case 4:
					break;
				default:
					break;
			}
		}
	}
	else{
		cout<<"Invalid Password!!";
		
	}

	return 0;
}
