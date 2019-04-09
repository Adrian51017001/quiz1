#include <iostream.h>
#include <conio.h>
  main() {
   char nama[25],jurusan [20];
   float nkehadiran, ntugas1, ntugas2, ntugas3, nmid, nquiz, nfinal, tnilait, na;
   cout<<"hitunglah nilai akhir: " <<endl;
   cout<<"masukkan nama mahasiswa: "; cin>> nama;
   cout<<"jurusan: "; cin>>jurusan;
   cout<<"nilai kehadiran: "; cin>> nkehadiran;
   cout<<"nilai tugas 1: "; cin>> ntugas1;
   cout<<"nilai tugas 2: "; cin>> ntugas2;
   cout<<"nilai tugas 3: "; cin>> ntugas3;
   cout<<"nilai mid: "; cin>> nmid;
   cout<<"nilai quiz: "; cin>> nquiz;
   cout<<"nilai final: "; cin>> nfinal;
  tnilait = (ntugas1 + ntugas2 + ntugas3) / 3;
  na = (0.2*nkehadiran) + (0.2*tnilait) + (0.2*nmid ) + (0.2*nquiz ) + ( 0.2*nfinal);
   cout<<"\n Siswa yang bernama= "<< nama <<endl;
   cout<<"\n jurusan mahasiswa= "<< jurusan <<endl;
   cout<<"\n memperoleh nilai akhir= "<< na <<endl;
   getch() ;
   }