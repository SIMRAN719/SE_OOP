/*Implement a class Complex which represents the Complex Number data type. Implement the 
following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.
*/

#include<iostream>
using namespace std;
class complex
{
	private:
		int real,imag;
	public:
		//complex():real(0),imag(0){}
		complex()
		{
			real=0;
			imag=0;
		}
		void accept()
		{
			cout<<"enter real part of the the complex number : ";
			cin>>real;
			cout<<"enter imaginary part of the complex number : ";
			cin>>imag;
		}
		complex operator + (const complex& x)
		{
			complex c;
			c.real=real+x.real;
			c.imag=imag+x.imag;
			return c;
		}
		complex operator * (const complex& p)
		{
			complex c;
			c.real=real*p.real-imag*p.imag;
			c.imag=real*p.imag+imag*p.real;
			return c;
		}
		void display()
		{
			if (imag<0)
			{
				cout<<real<<imag<<"i";
			}
			else
			{
				cout<<real<<"+"<<imag<<"i";
			}
		}
};
int main()
{
	complex n1,n2,out1,out2;
	cout<<"first complex number :"<<endl;
	n1.accept();
	cout<<"second complex number :"<<endl;
	n2.accept();
	out1=n1+n2;
	cout<<"addition of two complex number :";
	out1.display();
	cout<<"\n";
	cout<<"multiplication of two complex number :";
	out2=n1*n2;
	out2.display();
	return 0;
}