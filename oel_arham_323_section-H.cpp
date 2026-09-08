#include<iostream>
using namespace std;

struct employee {
    int id;
    string name, position;
    double salary;
};

employee Employee[100]; 
int employeeCount = 0;   

void addEmployee();
void updateSalary();
void displayEmployee();
void payroll();

int main() {
    cout << "******************************************\n";
    cout << "     -EMPLOYEE MANAGEMENT SYSTEM- \n";
    cout << "******************************************\n\n";

    int choice;

    do {
        cout << "1. Add Employee \n";
        cout << "2. Update Salary \n";
        cout << "3. Display Employee\n";
        cout << "4. Calculate Payroll\n";
        cout << "0. Exit\n";
        cout << "Enter choice b/w 0 to 4: \n";
        cin >> choice;

        while (choice < 0 || choice > 4) {
            cout << "Please enter a valid choice between 0 to 4: \n";
            cin >> choice;
        }

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                updateSalary();
                break;
            case 3:
                displayEmployee();
                break;
            case 4:
                payroll();
                break;
            case 0:
                cout << "Exiting the system...\n";
                return 0; 
            default:
                cout << "Invalid option! Try again.\n";
                break;
        }
    } while (choice >= 0 && choice <= 4);

    return 0;
}

void addEmployee() {
    if (employeeCount < 100) {
        cout << "Enter the name of the employee: \n";
        cin.ignore();  
        getline(cin, Employee[employeeCount].name);

        cout << "Enter the employee's unique ID: \n";
        cin >> Employee[employeeCount].id;

        cout << "Enter the designation of the employee: \n";
        cin.ignore();  
        getline(cin, Employee[employeeCount].position);

        cout << "Enter the salary of the employee: \n";
        cin >> Employee[employeeCount].salary;

        cout << "Employee added successfully!\n";
        employeeCount++; 
    } else {
        cout << "Cannot add more employees. Employee limit reached.\n";
    }
}

void updateSalary() {
    int id;
    cout << "Enter the employee's ID to update the salary: \n";
    cin >> id;

    bool found = false;
    for (int i = 0; i < employeeCount; i++) {
        if (Employee[i].id == id) {
            cout << "Enter the updated salary for employee " << Employee[i].name << ": \n";
            cin >> Employee[i].salary;
            cout << "Salary updated successfully!\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee with ID " << id << " not found!\n";
    }
}

void displayEmployee() {
    int id;
    cout << "Enter the employee's ID to view their details: \n";
    cin >> id;

    bool found = false;
    for (int i = 0; i < employeeCount; i++) {
        if (Employee[i].id == id) {
            cout << "Name: " << Employee[i].name << endl;
            cout << "ID: " << Employee[i].id << endl;
            cout << "Designation: " << Employee[i].position << endl;
            cout << "Salary: " << Employee[i].salary << " PKR.\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee with ID " << id << " not found!\n";
    }
}

void payroll() {
    if (employeeCount == 0) {
        cout << "No employees found! Cannot calculate payroll.\n";
        return;
    }

    double totalPay = 0;
    for (int i = 0; i < employeeCount; i++) {
        totalPay += Employee[i].salary;
    }

    cout << "Total Payroll for all employees: " << totalPay << " PKR.\n";
}
