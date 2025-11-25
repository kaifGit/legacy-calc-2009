
#include<iostream>
#include "Loan.h"

using namespace std;

int main(){
    long double loan_amount, interest_rate, number_of_years;

	cout<<"Enter the loan amount: ";
	cin>>loan_amount;
	if(loan_amount<=0){
		cout<<"Error: Invalid loan amount! Please enter valid amount"<<endl;
		return 1;
	}

	cout<<"Enter the interest rate: ";
	cin>>interest_rate;
	if(interest_rate<0){
		cout<<"Error: Invalid interest rate! Please enter valid rate"<<endl;
		return 1;
	}

	cout<<"The number of years: ";
	cin>>number_of_years;
	if(number_of_years<=0){
		cout<<"Error: Invalid number of years! Please enter valid number"<<endl;
		return 1;
	}

	Loan loan(loan_amount, interest_rate, number_of_years);
	double emi = loan.calculateMonthlyEMI();

 	cout<<"Total amount to be paid: "<<loan_amount<<endl;
	cout<<"Total interest: "<<loan_amount<<endl;
	cout<<"Monthly EMI: "<<emi<< endl;

	return 0;
}
