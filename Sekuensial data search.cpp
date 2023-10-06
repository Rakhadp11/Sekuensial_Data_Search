#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int data[10], index[10], i,j,x,n; //deklarasi variabel
	
	//proses input data
	cout<<endl<<"Masukkan jumlah data [max 10]: "; cin>> n;
	
	for(i=0;i<n;i++)
	{ cout<<"Masukkan data ke - "<<(i+1)<<" = "; cin>>data[i]; }
	
	//memasukkan data yang akan dicari ke dalam X
	cout<<"Masukkan data yang akan dicari : ";
	cin>>x;
	
	j=0; // inisialisasi jumlah data yang akan dicari sebelum pencarian
	//proses pencarian data
	for (i=0;i<n;i++)
	{
		if(data[i]==x)
		{ index[j]=i; j++; }
	}
	
	//jika data ditemukan dalam array
	if(j>0)
	{
		cout<<endl;
		cout<<"Data "<<x<<" yang dicari ada "<<j<<" buah "<<endl;
		cout<<"Data tersebut terdapat dalam index ke : ";
		
		for(i=0;i<j;i++)
		{ cout<<index[i]<<" "; }
		cout<<endl;
	}
	else
	{ cout<<"Data tidak ditemukan dalam array"<<endl; }
	
	getch();
	return 0;
}

