#include<iostream>
using namespace std;

int main()
{
	int pilih;
	
	cout<<"1. Perulangan For "<<endl;
	cout<<"2. Perulangan While "<<endl;
	cout<<"3. Perulangan Do-While "<<endl;
	cout<<"4. Array 1 Dimensi "<<endl;
	cout<<"5. Array Multidimensi"<<endl;
	cout<<"Masukkan Pilihan : ";cin>>pilih; //input dinamis
	
	if //percabangan if else
	(pilih==1)
	{ //percabangan if else
		cout<<" Perulangan for "<<endl;
		for(int a = 1; a<=10; a++)
		{
			cout<<a;
		}
	}
	
	else if(pilih==2)
	{
		cout<<" Perulangan while "<<endl;
		int a=1;
		while(a<=10)
		{ //Perulangan while
			cout<<a;
			a++;
		}
	}
	
	else if(pilih==3)
	{
		cout<<" Perulangan do-while "<<endl;
		int a=11;
		do
		{ //do-while
			cout<<a<<endl;
			a++;
		}
		while(a<=10);
		cout<<"Nilai Terakhir A "<<a;
		
	}
	
	else if(pilih==4)
	{
		cout<<"Array Dimensi 1 :  ";
		int A[5]= {1,2,3,4,5}; //array 1d
		cout<<A[0];
		cout<<A[1];
		cout<<A[2];
		cout<<A[3];
		cout<<A[4];
	}
	
	else if(pilih==5)
	{
		cout<<"Array Multidimensi : "<<endl; //
		int arr[2][2]; //arraymultidimensi
 
  		arr[0][0] = 10;
  		arr[0][1] = 20;
 	    arr[1][0] = 30;
  		arr[1][1] = 40;
 
  		cout << "Isi Variabel arr:" << endl;
  		cout << arr[0][0] <<" "<< arr[0][1] << endl;
  		cout << arr[1][0] <<" "<< arr[1][1] << endl;
		
	}
}
