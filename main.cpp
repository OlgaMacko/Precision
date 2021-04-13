#include <iostream>
#include<iomanip> 

using namespace std;

int main() {
  float a=170.123456789;
  cout.precision(7);
  //170.1235
cout << a << endl; 
cout << setprecision(7) << a << endl; 
// 170.1
//cout.precision(7); <----- FUNCTION
//setprecision(4) <-------MANIPULATER

cout << endl;
cout << "------------------"<<endl;
cout << "A" << "B";
cout << setw(3) << "C";
cout.width(12);
cout << "D" << endl; 
//AB  C           D 

cout << endl;
cout << "------------------"<<endl;
cout.fill('&');
cout << setw(10) << 123;
cout << setfill('^') << setw(10) << 456 << endl; 
//&&&&&&&123^^^^^^^456 


cout << endl;
cout << "------------------"<<endl;
cout.precision(2);
cout.setf (ios::fixed);
cout << 271.84753 << endl;//271.85

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!
cout.precision(4);
cout << fixed << 271.84753 << endl; //271.8475

cout << endl;
cout << "------------------"<<endl;
cout.fill('*');
cout << left << setw(10) << 12345 << endl;
cout << right << setw(10) << 456 << endl;
//12345*****
//*******456 

cout << endl;
cout << "------------------"<<endl;
//cout.setf (ios::scientific);
cout << 271.84753 << endl;
cout << scientific << 271.84753 << endl; 
//2.718e+002 

}