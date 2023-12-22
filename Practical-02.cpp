/*Develop an object oriented program in C++ to create a database of student information 
system containing the following information: Name, Roll number, Class, division, Date of 
Birth, Blood group, Contact address, telephone number, driving license no. and other.
Construct the database with suitable member functions for initializing and destroying the 
data viz constructor, default constructor, Copy constructor, destructor, static member 
functions, friend class, this pointer, inline code and dynamic memory allocation 
operators-new and delete*/

#include<iostream>
#include<string.h>
using namespace std;
class student
{
	static int stud_count;
	static void count_plus()
	{
		stud_count++;
	}
	private:
		int rollno;
		long telephone,licenseno;
		string name,std,bloodgrp,address,date;
		char div;
	public:
		friend void display(student s);
		student()
		{           
			 //default constructor
		}
		void accept()
		{
			cout<<"Enter the name of the student : ";
			cin>>name;
			cout<<"Enter the roll no. of the student : ";
			cin>>rollno;
			cout<<"Enter the telephone no. of the student : ";
			cin>>telephone;
			cout<<"Enter the driving license no. of the student : ";
			cin>>licenseno;
			cout<<"Enter the blood group of the student : ";
			cin>>bloodgrp;
			cout<<"Enter the address of the student : ";
			cin>>address;
			cout<<"Enter the class of the student : ";
			cin>>std;
			cout<<"Enter the division of the student : ";
			cin>>div;
			cout<<"Enter the date of birth of the student : ";
			cin>>date;
		}
		student(student &obj)                             //copy constructor
		{
			this->name=obj.name;
			this->rollno=obj.rollno;
			this->telephone=obj.telephone;
			this->licenseno=obj.licenseno;
			this->bloodgrp=obj.bloodgrp;
			this->address=obj.address;
			this->std=obj.std;
			this->div=obj.div;
			this->date=obj.date;
		}
		~student()                                       //Destructor
		{
			cout<<"database of student "<<name<<" is destroyed"<<endl;
		}
};
void display(student s)
		{
			cout<<"\n";
			cout<<"name of the student :"<<s.name<<endl;
			cout<<"roll no. of the student :"<<s.rollno<<endl;
			cout<<"telephone no. of the student :"<<s.telephone<<endl;
			cout<<"driving license no. of the student :"<<s.licenseno<<endl;
			cout<<"blood group of the student :"<<s.bloodgrp<<endl;
			cout<<"address of the student :"<<s.address<<endl;
			cout<<"class of the student :"<<s.std<<endl;
			cout<<"division of the student :"<<s.div<<endl;
			cout<<"date of birth of the student :"<<s.date<<endl;
		}
int main()

{
	int n;
	cout<<"Enter how many students data you want to enter :";
	cin>>n;
	student* new_student=new student();
	for(int i=0;i<n;i++)
	{
		new_student->accept();
		cout<<"Data of "<<i+1<<" student"<<endl;
		display(*new_student);
		cout<<"\n";
	}
	return 0;
}