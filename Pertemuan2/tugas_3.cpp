/* 
    Buatlah program untuk menentukan Zodiak menggunakan IF, Dengan input berupa nama, tanggal, dan bulan lahir. 
    Dengan hasil eksekusi sebagai berikut:
      Masukkan nama Anda                        : Aisha
      Silahkan masukkan tanggal lahir Anda      : 8
      Silahkan masukkan bulan lahir Anda [1-12] : 7
      Hai Aisha, zodiak Anda adalah Cancer
*/

#include <iostream>

using namespace std;


int main()
{
    string nama;
    long tanggal;
    long bulan;
    
    cout<<"Masukkan nama Anda         :";
    cin>>nama;
    cout<<endl;
    cout<<"Masukkan tanggal lahir     :";
    cin>>tanggal;
    cout<<endl;
    cout<<"Masukkan bulan lahir (1-12):";
    cin>>bulan;
    /*
     1. januari
     2. februari
     3. maret
     4. april
     5. mei
     6. juni
     7. juli
     8. agustus
     9. september
     10. oktober
     11. november
     12. desember
    */
    cout<<endl;
    
    if ((tanggal>=21 & tanggal<=31 & bulan==12)||(tanggal>=1 & tanggal<=19 & bulan==1))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Capricorn"<<endl<<endl;}
    if ((tanggal>=20 & tanggal<=30 & bulan==1)||(tanggal>=1 & tanggal<=18 & bulan==2))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Aquarius"<<endl<<endl;}
    if ((tanggal>=19 & tanggal<=28 & bulan==2)||(tanggal>=1 & tanggal<=20 & bulan==3))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Pisces"<<endl<<endl;}
    if ((tanggal>=21 & tanggal<=31 & bulan==3)||(tanggal>=1 & tanggal<=20 & bulan==4))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Aries"<<endl<<endl;}
    if ((tanggal>=21 & tanggal<=30 & bulan==4)||(tanggal>=1 & tanggal<=20 & bulan==5))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Taurus"<<endl<<endl;}
    if ((tanggal>=21 & tanggal<=31 & bulan==5)||(tanggal>=1 & tanggal<=20 & bulan==6))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Gemini"<<endl<<endl;}
    if ((tanggal>=21 & tanggal<=30 & bulan==6)||(tanggal>=1 & tanggal<=20 & bulan==7))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Cancer"<<endl<<endl;}
    if ((tanggal>=21 & tanggal<=31 & bulan==7)||(tanggal>=1 & tanggal<=21 & bulan==8))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Leo"<<endl<<endl;}
    if ((tanggal>=22 & tanggal<=31 & bulan==8)||(tanggal>=1 & tanggal<=22 & bulan==9))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Virgo"<<endl<<endl;}
    if ((tanggal>=23 & tanggal<=30 & bulan==9)||(tanggal>=1 & tanggal<=22 & bulan==10))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Libra"<<endl<<endl;}
    if ((tanggal>=23 & tanggal<=31 & bulan==10)||(tanggal>=1 & tanggal<=22 & bulan==11))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Scorpio"<<endl<<endl;}
    if ((tanggal>=23 & tanggal<=30 & bulan==11)||(tanggal>=1 & tanggal<=22 & bulan==12))
      {cout<<"Hai "<<nama<<", Zodiak kamu adalah Sagitarius"<<endl<<endl;}
    else
      {cout<<"Mohon periksa lagi tanggal dan bulan lahir yang Anda masukkan"<<endl<<endl;}
    
    }
