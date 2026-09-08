#include <iostream>
using namespace std;
int main() {

	int code,meal_price,quantity,total_amount,currency;
	char choice;
	cout<<"\t\t\t\t----------------------------------------------\n";
	cout<<"\t\t\t\t**********************************************\n";
	cout<<"\t\t\t\tWelcome To Resturant Order Payment Application!\n";
	cout<<"\t\t\t\t**********************************************\n";
	cout<<"\t\t\t\t----------------------------------------------\n";
menu:
	cout<<"\t\t\t\t\t\tOrder List: \n";
	cout<<"\t\t\tCode\t\tMeal-ID\t\t\tMeal-Name\t\t\tPrice per kg(PKR)\t\t\t\n";
	cout<<"\t\t\t1\t\t1001\t\t\tChicken Karahi\t\t\t1800\n";
	cout<<"\t\t\t2\t\t1002\t\t\tChicken Tikka\t\t\t2000\n";
	cout<<"\t\t\t3\t\t1003\t\t\tChicken Haleem\t\t\t2200\n";
	cout<<"\t\t\t4\t\t1004\t\t\tChicken Handi\t\t\t1800\n";
	cout<<"\t\t\t5\t\t1005\t\t\tCreamy Chicken\t\t\t2500\n";
	cout<<"\t\t\t0\t\t___\t\t\tto exit the menu \t\t\t\t\t\n";
	cout<<"\t\t\tPlease enter the code of the dish you want to order and 0 to exit the menu: \n\t\t\t";
	cin>>code;
//	if(code<0){
//		cout<<"\t\t\tPlease enter the right code b/w (0-5) ";
//		cin>>code;
//	}
	switch(code) {
		case 1:
			cout<<"\t\t\t1\t\t1001\t\t\tChicken Karahi\t\t\t1800\n";
			meal_price=1800;
			cout<<"\t\t\tEnter y for furthur order  \n\t\t\t";
			cin>>choice;
			if(choice =='y' || choice =='Y') {
				cout<<"\t\t\tHow much quantity you want to order in kg! \n\t\t\t";
				cin>>quantity;
			if(quantity>0) {
				 meal_price = meal_price*quantity;	
				  goto menu;
			}
			 	}
				 else {
					cout<<"\t\t\tError! \n";
					cout<<"\t\t\tPlease enter the quantity: \n\t\t\t";
					cin>>quantity;
					goto menu;
				}
			break;
		case 2:
			cout<<"\t\t\t2\t\t1002\t\t\tChicken Tikka\t\t\t2000\n";
			meal_price=2000;
				cout<<"\t\t\tDo you want to purchase more items: \n";
			cout<<"\t\t\tEnter y for furthur order  \n\t\t\t";
			cin>>choice;
			if(choice =='y' || choice =='Y') {
				
				cout<<"\t\t\tHow much quantity you want to order in kg! \n\t\t\t";
				cin>>quantity;
			if(quantity>0) {
				 meal_price = meal_price*quantity;
				 goto menu;
				
			}
			 	}
				 else {
					cout<<"\t\t\tError! \n";
					cout<<"\t\t\tPlease enter the quantity: \n\t\t\t";
					cin>>quantity;
					goto menu;
				}
			break;
		case 3:
			cout<<"\t\t\t3\t\t1003\t\t\tChicken Haleem\t\t\t2200\n";
			meal_price=2200;
			cout<<"\t\t\tDo you want to purchase more items: \n";
			cout<<"\t\t\tEnter y for furthur order  \n\t\t\t";
			cin>>choice;
			if(choice =='y' || choice =='Y') {
				
				cout<<"\t\t\tHow much quantity you want to order in kg! \n\t\t\t";
				cin>>quantity;
			if(quantity>0) {
				 meal_price = meal_price*quantity;
				 goto menu;
				
			}
			 	}
				 else {
					cout<<"\t\t\tError! \n";
					cout<<"\t\t\tPlease enter the quantity: \n\t\t\t";
					cin>>quantity;
					goto menu;
				}
			break;
		case 4:
			cout<<"\t\t\t4\t\t1004\t\t\tChicken Handi\t\t\t1800\n";
			meal_price=1800;
			cout<<"\t\t\tDo you want to purchase more items: \n";
			cout<<"\t\t\tEnter y for furthur order  \n\t\t\t";
			cin>>choice;
			if(choice =='y' || choice =='Y') {
				
				cout<<"\t\t\tHow much quantity you want to order in kg! \n\t\t\t";
				cin>>quantity;
			if(quantity>0) {
				 meal_price = meal_price*quantity;
				 goto menu;
				
			}
			 	}
				 else {
					cout<<"\t\t\tError! \n";
					cout<<"\t\t\tPlease enter the quantity: \n\t\t\t";
					cin>>quantity;
					goto menu;
				}
			break;
		case 5:
			cout<<"\t\t\t5\t\t1005\t\t\tCreamy Chicken\t\t\t2500\n";
			meal_price=2500;
		cout<<"\t\t\tDo you want to purchase more items: \n";
			cout<<"\t\t\tEnter y for furthur order  \n\t\t\t";
			cin>>choice;
			if(choice =='y' || choice =='Y') {
				
				cout<<"\t\t\tHow much quantity you want to order in kg! \n\t\t\t";
				cin>>quantity;
			if(quantity>0) {
				 meal_price = meal_price*quantity;
				 goto menu;
				
			}
			 	}
				 else {
					cout<<"\t\t\tError! \n";
					cout<<"\t\t\tPlease enter the quantity: \n\t\t\t";
					cin>>quantity;
					goto menu;
				}
			break;
		case 0:
			cout<<"\t\t\tThank you for coming! \n";
			break;
		default:
			cout<<"\t\t\tInvalid Input! \n";
			goto menu;
	}
	//sales tax inclusion
	if(meal_price>1000 && meal_price<=3000) {
		total_amount = meal_price + (meal_price * 2)/100;
	} else if(meal_price>3000) {
		total_amount = meal_price + (meal_price * 5)/100;
	} else {
		total_amount = meal_price + (meal_price * 0)/100;
	}
	//currency exchange 
	cout<<"\t\t\tPlease select currency in which you want to pay: \n";
	cout<<"\t\t\t1.  Pakistani rupees \n";
	cout<<"\t\t\t2.  Euro \n";
	cout<<"\t\t\t3.  Dollar \n";
	cout<<"\t\t\tPress 1 to 3 according to given currency: \n\t\t\t";
	cin>>currency;
	if(currency<1||currency>3){
		cout<<"\t\t\tInvalid Input ! please enter the choice b/w 1 & 3 \n";
		cin>>currency;
	}
	if(currency==1) {
		cout<<"\t\t\tTotal Amount = "<<total_amount<<" rupees \n";
	} else if(currency==2) {
		total_amount/=193;
		cout<<"\t\t\tTotal Amount = "<<(char)0x80<<" "<<total_amount<<" euros\n";
	} else if(currency==3) {
		total_amount/=165;
		cout<<"\t\t\tTotal Amount = $"<<total_amount<<" dollars \n";
	} else {
		cout<<"\t\t\tInvalid Input! \n";
	}
	return 0;
}