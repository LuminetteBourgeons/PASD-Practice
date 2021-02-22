// Buatlah program dengan tampilan sbb
/*
  Masukkan sebuah huruf =
  Masukkan sebuah kata  =
  Masukkan sebuah angka =
  Huruf yang ada masukkan adalah =
  Kata yang ada masukkan adalah  =
  Angka yang ada masukkan adalah =
*/
  
#include <iostream>

using namespace std;


int main()
{
    char huruf;
    string kata;
    int angka;
    
    cout<<"Masukkan sebuah huruf ="<<endl;
     cin>>huruf;
    cout<<"Masukkan sebuah kata  ="<<endl;
     cin>>kata;
    cout<<"Masukkan sebuah angka ="<<endl;
     cin>>angka;
    
    cout<<"Huruf yang ada masukkan adalah ="<<huruf<<endl;
    cout<<"Kata yang ada masukkan adalah  ="<<kata<<endl;
    cout<<"Angka yang ada masukkan adalah ="<<angka<<endl;
}
