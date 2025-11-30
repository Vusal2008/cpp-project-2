#include <iostream>
using namespace std;

// cemini quraq 
int cem(int arr[][100],int rows,int cols){
	int cem=0;
	for (int i=0  ;i<rows;i++){
		for(int j=0;j<cols;j++){
			cem+=arr[i][j];
		}
	}
	return cem;
}

//hasili
long long hasil(int arr[][100],int rows,int cols){
	long long hasil=1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			hasil*=arr[i][j];
		}
	}
	return hasil;
}

//max ve min 
int max(int arr[][100],int rows,int cols){
	int max=arr[0][0];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	return max;
}

int min(int arr[][100],int rows,int cols){
	int min=arr[0][0];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(min>arr[i][j]){
				min=arr[i][j];
			}
		}
	}
	return min;
}


// massivi quraq 
int main(){
	int rows,cols;
	cout<<"matrisin setrini daxil edin:";
	cin>>rows;
	cout<<"matrisin sutununu daxil edin:";
	cin>>cols;
	
	int arr[100][100];
	
	cout<<"massivi daxil edin:\n";
	for(int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"cemi="<<cem(arr,rows,cols)<<endl;
	cout<<"hasili="<<hasil(arr,rows, cols) << endl;
    cout <<"max= " << max(arr, rows, cols) << endl;
    cout <<"min= " << min(arr, rows, cols) << endl;
    
    return 0;
}
