/*
Imagine a publishing company which does marketing for book and audio cassette versions. 
Create a class publication that stores the title (a string) and price (type float) of publications. 
From this class derive two classes: book which adds a page count (type int) and tape which 
adds a playing time in minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter data and 
displays the data members. If an exception is caught, replace all the data member values with 
zero values.
*/

#include <iostream>
using namespace std;

class publication{
    string name;
    float price;
    public:
        void input()
		{
            cout << "Enter publication name : ";
			cin>>name;
            cout << "Enter price of publication in (decimal) : ";
            cin >> price;
        }
        void display()
		{
            cout << "Publication : " << name << endl;
            cout << "Price : " << price << " Rs" << endl;
        }
};

class book : public publication{
    int pages;
    public:
        void add()
		{
            try{
                input();
                cout << "Enter no of pages of book : ";
                cin >> pages;
                cout << endl;

                if(pages <= 0) throw pages;
            }catch(...){
                cout << "Page no invalid";
                pages = 0;
            }
        }
        void display_book(){
            display();
            cout << "Pages of book : " << pages << endl;
        }
};

class caset : public publication{
    int time;
    public:
        void add()
		{
            try{
                input();
                cout << "Enter time of caset : ";
                cin >> time;
                cout<<endl;

                if(time <= 0) throw time;
            }catch(...){
                cout << "Time invalid";
                time = 0;
            }
        }
        void display_caset()
		{
            display();
            cout << "Play time : " << time << endl;
        }
};

int main(){
    book book1;
    book1.add();
    book1.display_book();
    caset caset1;
    cout<<endl;
    caset1.add();
    caset1.display_caset();
}




