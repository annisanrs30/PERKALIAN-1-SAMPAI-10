#include<iostream>
using namespace std;
int main()
{
	
	cout << "\nNama :   Annisa Rusydina Sabila";
    cout << "\nNIM  :   19051397004";
    cout << "\nPRODI:   D4 Manajemen informatika";

    awal:
    int angka,hasil;
    cout<<"\n\n\n Masukkan angka : ";
    cin>>angka;
    if(angka>10)
    {
        cout<<"\n Inputan lebih dari 10"<<endl;
        goto awal;
    }
    cout<<endl;
    for(int a=1;a<=10;a++)
    {
        hasil=angka*a;
        cout<<angka<<" x "<<a<<" = "<<hasil<<endl;
    }

    for(int c=1;c<=10;c++)
    
    return 0;
}
