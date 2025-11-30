#include <iostream>
using namespace std;

//cemi
int cem(int arr[], int n){
	int cem=0;
	for (int i=0;i<n;i++){
		cem+=arr[i];
	}
	return cem;
}


//hasili
int hasil(int arr[],int n){
	int hasil=1;
	for(int i=0;i<n;i++){
		hasil*=arr[i];
	}
	return hasil;
}

//max ve minimumu
void findmaxmin(int arr[],int n,int &max, int &min){
	// burdaki &-referans mainin icindeki qiymeti deysmek ucun istifade etdim.
	max=arr[0];
	min=arr[0];
	for(int i=1;i<n;i++){
		// burda i ni 1 yazdim cunki min ve maxa oci elementdeki ededi menmsetmisem tezden orda ini 0 vermeye ehtiyac yoxdur.
		if(arr[i]>max){max=arr[i];
		}
		if(arr[i]<min){min=arr[i];
		}
	}
}


//massiv yaratmaliyiq ilk once 
int main(){
	int n;
	cout<<"massivin olcusunu daxil edin:";
	cin>>n;
	
	int arr[n];
	cout<<"massivin elementlerini daxil edin:\n";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	
	//massiv yaradildi indise bize cem ve hasili yaradib neticeni qaytaririq
	int c=cem(arr,n);
	int h=hasil(arr,n);
	
	
	//min ve max ucun qururuq
	int max,min;
	findmaxmin(arr,n,max,min);
	
	
	// hamsin capa verrik
	cout<<"cem="<<c<<endl;
	cout<<"hasil="<<h<<endl;
	cout<<"max="<<max<<endl;
	cout<<"min="<<min<<endl;
	
	return 0;
}
