#include <iostream>
using namespace std;
int main() {
	int n1,n2,n3,n4;
	cout<<"Please enter 4 integers: ";
	cin>>n1>>n2>>n3>>n4;
	int first,second,third,fourth;
	if(n1<n2 && n1<n3 && n1<n4){
		first = n1;
		if(n2<n3 && n2<n4){
			second = n2;
			if(n3<n4){
				third = n3;
				fourth = n4;
			}
			else{
				third = n4;
				fourth = n3;
			}
		}
		else if(n3<n2 && n3<n4){
			second = n3;
			if(n2<n4){
				third = n2;
				fourth = n4;
			}
			else{
				third = n4;
				fourth = n2;
			}
		}
		else{
			second = n4;
			if(n2<n3){
				third = n2;
				fourth = n3;
			}
			else{
				third = n3;
				fourth = n2;
			}
		}
	}
	else if(n2<n1 && n2<n3 && n2<n4){
		first = n2;
		if(n1<n3 && n1<n4){
			second = n1;
			if(n3<n4){
				third = n3;
				fourth = n4;
			}
			else{
				third = n4;
				fourth = n3;
			}
		}
		else if(n3<n1 && n3<n4){
			second = n3;
			if(n1<n4){
				third = n1;
				fourth = n4;
			}
			else{
				third = n4;
				fourth = n1;
			}
		}
		else{
			second = n4;
			if(n1<n3){
				third = n1;
				fourth = n3;
			}
			else{
				third = n3;
				fourth = n1;
			}
		}
	}
	else if(n3<n1 && n3<n2 && n3<n4){
		first = n3;
		if(n1<n2 && n1<n4){
			second = n1;
            if(n2<n4){
				third = n2;
				fourth = n4;
			}
			else{
				third = n4;
				fourth = n2;
			}
		}
		else if(n2<n1 && n2<n4){
			second = n2;
			if(n1<n4){
				third = n1;
				fourth = n4;
			}
			else{
				third = n4;
				fourth = n1;
			}
		}
		else{
			second = n4;
			if(n1<n2){
				third = n1;
				fourth = n2;
			}
			else{
				third = n2;
				fourth = n1;
			}
		}
	}
	else{
		first = n4;
		if(n1<n2 && n1<n3){
			second = n1;
			if(n2<n3){
				third = n2;
				fourth = n3;
			}
			else{
				third = n3;
				fourth = n2;
			}
		}
		else if(n2<n1 && n2<n3){
			second = n2;
			if(n1<n3){
				third = n1;
				fourth = n3;
			}
			else{
				third = n3;
				fourth = n1;
			}
		}
		else{
			second = n3;
			if(n1<n2){
				third = n1;
				fourth =n2;
			}
			else{
				third = n2;
				fourth = n1;
			}
		}
	}
	cout<<"Ascending Order is: \n"<<first<<endl<<second<<endl<<third<<endl<<fourth<<endl;
	cout<<"Descending Order is: \n"<<fourth<<endl<<third<<endl<<second<<endl<<first<<endl;
	return 0;
}
