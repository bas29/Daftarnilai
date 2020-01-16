#include<stdio.h>
#include<conio.h>
#include<iostream.h>

struct
{
char nama [20];
int tugas;
int mid;
int uas;
}mhs[40];

void main()
{
int i,hasil,nilai_huruf;
int n;
cout<<"     Program Perhitungan Nilai Akhir     "<<endl;
cout<<"____________________________________________\n";
cout<<"    "<<endl;

cout<<" Masukan Jumlah Mahasiswa = ";cin>>n;
for(i=1; i<=n; i++)
{
cout<<endl;
cout<<" Masukan Nama           = ";cin>>mhs[i].nama;
cout<<" Masukan nilai tugas    = ";cin>>mhs[i].tugas;
cout<<" Masukan nilai mid      = ";cin>>mhs[i].mid;
cout<<" Masukan nilai uas      = ";cin>>mhs[i].uas;
cout<<endl<<endl;

}
cout<<"\tDaftar Nilai\n"<<endl;
cout<<"Materi : Pemrograman C++\n";
cout<<"_______________________________\n";
cout<<"No     Nama\t\tNilai\t\tGrade\n";
cout<<"   Mahasiswa  \tTugas\tUTS\tUAS\tAkhir\n";
cout<<"-----------------------------------------\n";
for(i=1; i<=n; i++)
{
hasil= mhs[i].tugas*0.3+mhs[i].mid*0.3+mhs[i].uas*0.4;

cout<<endl;

cout<<" "<<i;
cout<<"\t"<<mhs[i].nama;
cout<<"\t"<<mhs[i].tugas;
cout<<"\t"<<mhs[i].mid;
cout<<"\t"<<mhs[i].uas;
if (hasil>=80&&hasil<=100)
cout<<"\tA\n";
if (hasil>=70&&hasil<80)
cout<<"\tB\n";
if(hasil >=59&&hasil<70)
cout<<"\tC\n";
if  (hasil >=50&&hasil<59)
cout<<"\tD\n";
if (hasil <50)
cout<<"\tE\n";
}
getch();
}



