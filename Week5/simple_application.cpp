#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

// declare data structure contains the customer's information
typedef struct customer {
    char mName[100];
    char mCusType[3]; // Type of customer CN/CT/NN 
    char mProduct[100];
    int mQuantity;
    double mPrice;

}TY_Customer;


// khai bao vector de chua va quan li thong tin khach hang TY_Customer. 
typedef std::vector<TY_Customer> TY_CustomerList;
TY_CustomerList vList; 

// dinh nghia 4 functions de thuc hien cac chuc nang 
// nhap so khach hang
// thong tin khach hang 
// sap xep thong tin khach hang 
// in ra danh sach khach hang 

// Main functions 
int input_number_of_customers(void);
void input_customers_infor(TY_Customer * vList, int n);
void display_list(TY_Customer * vList);
void sort_customer_list(TY_CustomerList* vList);


// Other supporting functions
void print_menu(void); // Print selection menu
double get_discount(char* mCusType); //Get discount information
double calculate_money(TY_Customer *tmp); //Calculate total amount of money of each customer
void print_a_customer_info(TY_Customer *tmp); //Display information of a customer
bool compare(TY_Customer tmp1, TY_Customer tmp2); // Used for vector sort
void check_valid_input(void); // Check input data is valid or not

int main() {
    input_number_of_customers();
    return 0;
}

int input_number_of_customers(void)
{
	int n;
	cout << "Please input number of customers (n>=1): \t";
    cin >> n;

	while(!cin || n <=0) {
	    // user didn't input a number
	    cout << "Please input a positive numeric data! \n";
	    cin.clear(); // reset failed bit
	    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
	    cin >> n;
	}
	return n;
}

void input_customers_infor(TY_CustomerList* vList, int n) {
	//Input information of customers
	char select;
	if (!vList->empty()) {
		cout << "List is not empty. Do you want to add more data? (Y/N): ";
		cin >> select;
		if (select == 'N' || select == 'n')
			return;
	}
	
	TY_Customer tmp;
	for (int i = 0; i < n; i++) {
		cout << "Please input information of customer #" << i+1;
		
		cout << "\nInput customer name: ";
		cin >> tmp.mName;
		cout << "Customer name = " << tmp.mName << "\n";

		do {
			cout << "\nInput customer type [CN/CT/NN]: ";
			cin >> tmp.mCusType;
			//customer type must be CN, CT or NN
		} while ((strcmp(tmp.mCusType, "CN") != 0) && strcmp(tmp.mCusType, "CT") != 0 && strcmp(tmp.mCusType, "NN") != 0);
		cout << "Customer type = " << tmp.mCusType << "\n";

		cout << "\nInput product name: ";
		cin >> tmp.mProduct;

		cout << "Product = " << tmp.mProduct << "\n";
		
		// Quantity and Price must be digit data
		cout << "\nInput product quantity (Numeric): ";
		cin >> tmp.mQuantity;

		while(!cin) {
			// user didn't input a number
		    cin.clear(); // reset failed bit
		    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
		    cin >> tmp.mQuantity;
			}
		cout << "Quantity = " << tmp.mQuantity << "\n";

		cout << "\nInput product price (Numeric): ";
		cin >> tmp.mPrice;
		while(!cin) {
			// user didn't input a number
		    cin.clear(); // reset failed bit
		    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
		    cin >> tmp.mPrice;
			}
		cout << "Price = " << tmp.mPrice << "\n";

		if(!cin) 
		{
		    // user didn't input a number
		    cin.clear(); // reset failed bit
		    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
		}
		vList->push_back(tmp);
	}
	return;
}	

void display_list(TY_CustomerList* vList) {
	if(vList->empty()) {
		cout << "NO RECORDS\n";
		return;
	}
	cout << "NAME\t" << "TYPE\t" << "PRODUCT\t" << "QUANTITY\t" << "PRICE\t" << "MONEY\n";
	cout << "---------------------------------------------------------------\n";

	for (auto tmp : *vList) {
		print_a_customer_info(&tmp);
	}
}

// sap xep cac phan tu cua vector, sort cua thu vien std 
void sort_customer_list(TY_CustomerList* vList) {
	if(vList->empty()) {
		cout << "NO RECORDS\n";
		return;
	}
	cout << "Sorted customers information by DESC price\n";
	std::sort(vList->begin(), vList->end(), compare);
}