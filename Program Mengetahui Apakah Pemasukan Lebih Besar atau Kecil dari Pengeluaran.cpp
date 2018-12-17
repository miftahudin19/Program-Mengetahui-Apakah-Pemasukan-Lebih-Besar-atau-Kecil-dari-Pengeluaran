#include<iostream>
using namespace std;
int main (){
int pemasukan , pengeluaran;

cout<<"PROGRAM UNTUK MENGETAHUI PEMASUKAN DAN PENGELUARAN"<<endl;

cout<<"Masukan jumlah Pemasukan = ";
cin>>pemasukan;
cout<<"Masukan jumlah Pengeluaran = ";
cin>>pengeluaran;

if (pemasukan<pengeluaran)
{
    cout<<"Pemasukan Lebih Kecil dari Pengeluaran\n";
}

else if(pemasukan>pengeluaran)
{
    cout<<"Pemasukan Lebih Besar dari Pengeluaran\n";

}
else
    cout<<"error";


}
