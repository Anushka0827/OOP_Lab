#include<iostream>
#include<string>
using namespace std;
double getIncome(string prompt);
double computeTaxes(double income);
void printTaxes(double taxes);
int main(){
	double income = getIncome("Please enter the salary/income of the employee:");
	double taxes = computeTaxes(income);
	printTaxes(taxes);
	return 0;
}
double computeTaxes(double income){
	if(income<5000){
		return 0.0;
	}
	return 0.07*(income-5000.0);
}

double getIncome(string prompt){
	double income;
	cout<<prompt;
	cin >>income;
	return income;
}
void printTaxes(double taxes){
	cout<<"The taxes is $:"<<taxes<<endl;
}

