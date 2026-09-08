#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\t\t***********************\n";
	cout<<"\t\t\t\t-----------------------\n";
	cout<<"\t\t\t\tWelcome to Robo System!\n";
	cout<<"\t\t\t\t-----------------------\n";
	cout<<"\t\t\t\t***********************\n";
	int signal;
	cout<<"\t\t\t\tHi! I am Robo.\n\t\t\t\tPlease enter a signal between 1 to 3\n";
	cout<<"\t\t\t\tEnter '1' for SCANNING DANGER \n";
	cout<<"\t\t\t\tEnter '2' for SENDING ALERT TO BASE \n";
	cout<<"\t\t\t\tEnter '3' for PERFORMING DIAGNOSTIC CHECK \n\t\t\t\t";
	cin>>signal;
	cout<<"\n\n\n\n";
	if(signal == 1) {
		cout<<"\t\t\t\tScanning for danger... \n";
	}
	else if(signal== 2) {
		cout<<"\t\t\t\tSending alert to base... \n";
	}
	else if(signal == 3) {
		cout<<"\t\t\t\tPerforming diagnostic check... \n";
	}
	else {
		cout<<"Invalid input signal! \n";
	}
	return 0;
}