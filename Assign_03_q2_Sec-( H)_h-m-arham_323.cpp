#include<iostream>
#include<conio.h>
using namespace std;
void multiply(){
	 int sum = 0;
    cout<<"**********************************************************\n";
    cout<<"This Program is going to MULTIPLY two matrices(2D-Arrays).\n";
    cout<<"**********************************************************\n\n";
    
    int arrayA[3][3];
    int arrayB[3][3];
    int product[3][3];

    // Input elements for array A
    cout << "Enter the elements of array(a): \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arrayA[i][j];
        }
    }

    // Input elements for array B
    cout << "Enter the elements of array(b): \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arrayB[i][j];
        }
    }

    // Multiplying the two matrices:
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += arrayA[i][k] * arrayB[k][j];
            }
            product[i][j] = sum;
        }
    }

    // Print the resultant matrix:
    cout << "The resultant matrix is: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << product[i][j] << " ";
        }
        cout << "\n";
    }
}

void add(){
	cout<<"**********************************************************\n";
    cout<<"This Program is going to ADD two matrices(2D-Arrays).\n";
    cout<<"**********************************************************\n\n";
    
    int arrayA[3][3];
    int arrayB[3][3];
    int sum=0;
    cout<<"Enter elements of array A :\n";
    for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
	  cin>>arrayA[i][j];	
	}
	cout<<"\n";
}
    cout<<"Enter elements of array B :\n";
    for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
		cin>>arrayB[i][j];
	}
	cout<<"\n";
}
    cout<<"The resultant matrix is : \n";
    for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
		sum=arrayA[i][j]+arrayB[i][j];
		cout<<sum<<"  ";
	}
	cout<<"\n";
}
}
int main()
{
    char choice ;
    cout<<"*************************************************\n";
    cout<<"\tMATRIX CALCULATOR SYSTEM\n";
    cout<<"*************************************************\n\n";
    
    cout<<"Enter 'a' for (addition operation) and 'b' for(multiplication operation) .\n";
    cin>>choice;
    while(choice !='a' && choice !='A' && choice != 'b' && choice !='B'){
    	cout<<"Please enter a valid choice (a or b)! \n";
    	cin>>choice;
	}
	
	switch(choice){
		case 'a':
			case 'A':
				system("cls");
			    add();
			    break;
			 case 'b':
			     case 'B':
			     	system("cls");
			        multiply();
			        break;	
	}
	return 0;
}