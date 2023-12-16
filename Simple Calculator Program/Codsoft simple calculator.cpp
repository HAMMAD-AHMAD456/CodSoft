#include <iostream>
using namespace std;
int main(){
	int num1, num2;

	while(true){
			char y, operation;
			cout<<"\nEnter value number one:";cin>>num1;
	cout<<"\nEnter value number two:";cin>>num2;
		
		cout<<"\t\t\t\t\t**********Select your choice:**********"<<endl<<endl;
	cout<<"Enter operation (a) for addition:"<<endl;
	cout<<"Enter operation (s) for subtraction:"<<endl;
	cout<<"Enter operation (m) for multipication:"<<endl;
	cout<<"Enter operation (d) for division:"<<endl;
	cout<<"Enter operation (r) for remainder:"<<endl<<endl;
	
	cin>>y;
	
    if (y == 'a' || y == 's' || y == 'm' || y == 'd' || y == 'r') {

    } else {
        cout << "Invalid operation. " << endl;
    }
     if (y=='a')  	
	cout<<"\nThe result of addition is= "<<num1 + num2<<endl<<endl<<"\nFor another operation enter values below\n";
	else 
	     if (y=='s')
	cout<<"\nThe result of subtraction is= "<<num1 - num2<<endl<<endl<<"\nFor another operation enter values below\n";
	else
		     if (y=='m') 
	cout<<"\nThe result of multiplaction is= "<<num1 * num2<<endl<<endl<<"\nFor another operation enter values below\n";
		else 
		     if (y=='d')
	cout<<"\nThe result of division is= "<<num1 / num2<<endl<<endl<<"\nFor another operation enter values below\n";
			else
		     if (y=='r')
	cout<<"\nThe result as a remainder is= "<<num1 % num2<<endl<<endl<<"\nFor another operation enter values below\n";
	
	   else	
     cout<<"Please choose a, s, m, d, or r.\n";
}
   return 0;
}

	
	   
