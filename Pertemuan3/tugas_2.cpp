/*
    Studi kasus:
        Judul "Menu Paket KFC"
        Tampilkan menu paket KFC
        > Paket 1: Nasi, Ayam, Minum
        > Paket 2: Burger, Minum
        > Paket Reguler:
            Nasi    <input jumlah>
            Ayam    <input jumlah>
            Minum   <input jumlah>
            Burger  <input jumlah>
            Kentang <input jumlah>
        Input pilihan paket
        Setiap paket 1 dan 2 mendapat tambahan "Apakah ingin menambah kentang?"
        Untuk paket reguler hanya menginput jumlah setiap pesanan
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pilihan;
    float total;
    
    /*
    nasi=5000;
    ayam=7000;
    burger=5000;
    minum=4000;
    harga kentang=6000;
    */
    
    cout<<"Selamat datang di KFC"<<endl;
    cout<<"Menu Paket KFC:"<<endl;
    cout<<"1. Paket 1: Nasi, Ayam, Minum"<<endl;
    cout<<"2. Paket 2: Burger, Minum"<<endl;
    cout<<"3. Paket Reguler"<<endl;
    cout<<"Masukkan pilihan menu paket Anda: ";
    cin>>pilihan;
    cout<<endl;
    if (pilihan==1)
    {
        string kentang;
        cout<<"Apakah ingin menambah kentang? (y/n)";
        cin>>kentang;
        //aku kentang
        //ya allah capek bgt knp si
        if (kentang=="y")
        {
            total=(5000+7000+4000+6000);
            cout<<"Total yang harus dibayar:"<<total<<endl<<endl;
        }
        else if (kentang=="n")
        {
            total=(5000+7000+4000);
            cout<<"Total yang harus dibayar:"<<total<<endl<<endl;
        }
    }
    else if (pilihan==2)
    {
        string kentang;
        cout<<"Apakah ingin menambah kentang? (y/n)";
        cin>>kentang;
        //aku kentang
        //ya allah capek bgt knp si
        if (kentang=="y")
        {
            total=(5000+4000+6000);
            cout<<"Total yang harus dibayar:"<<total<<endl<<endl;
        }
        else if (kentang=="n")
        {
            total=(5000+4000);
            cout<<"Total yang harus dibayar:"<<total<<endl<<endl;
        }
    }
    else if (pilihan==3)
    {
        int nasi, ayam, burger, kentang, minum;
        cout<<"Masukkan banyak makanan yang ingin dipesan:"<<endl;
        cout<<"Nasi     :";
        cin>>nasi;
        cout<<"Ayam     :";
        cin>>ayam;
        cout<<"Burger   :";
        cin>>burger;
        cout<<"Kentang  :";
        cin>>kentang;
        cout<<"Minum    :";
        cin>>minum;
        total = (nasi*5000)+(ayam*7000)+(burger*5000)+(kentang*6000)+(minum*4000);
        cout<<"Total yang harus dibayar:"<<total<<endl<<endl;
    }
    else
    {
        cout<<"Pilihan tidak tersedia"<<endl<<endl;
    }
}
