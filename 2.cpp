#include<iostream>
using namespace std;
int main()
{
    string name, address;
    cout << "Hay nhap ten cua ban : ";
    getline(cin, name);
    cout << "Hay nhap dia chi cua ban : ";
    getline(cin, address);
    cout << "Name: " << name << "\n" ;
    cout << "Address: " << address; 
    return 0;
}