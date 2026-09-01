#include<iostream>
#include<string>
using namespace std;
class student{
public:
	int roll;
	string name;
	
	void getdata(){
	cout<<"Enter roll number:";
	cin>>roll;
	
	cout<<"Enter name:";
	getline(cin, name);	
	}
	
	void putdata(){
	cout<<"\nRoll number is:"<<roll;
	cout<<"\nName is:"<<name;
	
	}
	
};
class department : public student{
public:
	int dept_id;
	string dept_name;
	
	void getdata1(){
	cout<<"Enter department id:";
	cin>>dept_id;
	
	cout<<"Enter department name:";
	cin>>dept_name;	
	}
	
	void putdata1(){
	cout<<"\nDepartment id is:"<<dept_id;
	cout<<"\nDepartment Name is:"<<dept_name;
	
	}
};

int main(){
department d;
d.getdata();
d.getdata1();
d.putdata();
d.putdata1();
}
