//Buatlah program untuk menentukan masukkan dari user, apakah berupa huruf vokal atau konsonan!

#include <iostream>

using namespace std;


int main()
{
    string huruf;
    
    cout<<"Masukkan huruf:";
    cin>>huruf;
    cout<<endl;
    
    if((huruf=="a")||(huruf=="A")||(huruf=="i")||(huruf=="I")||(huruf=="u")||(huruf=="U")||(huruf=="e")||(huruf=="E")||(huruf=="o")||(huruf=="O"))
    {cout<<"Huruf yang anda masukkan adalah huruf vokal"<<endl;}
    else
    {cout<<"Huruf yang anda masukkan adalah huruf konsonan"<<endl;}
    
}
