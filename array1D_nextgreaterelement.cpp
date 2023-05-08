#include<bits/stdc++.h>
#define n 8
using namespace std;

int main(){
	int arr[n]={1,2,3,4,5,6,7,8};
	cout<<"elements are= ";
	for(int i=0; i<8; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		
		
		int max=arr[0];
		if(max<arr[j]){
			max=arr[j];
		}
			cout<<" no greater element for "<<max<<endl;
		}
	
	cout<<endl;
		
		cout<<"element of "<<i+1<< " is= "<<arr[i] <<endl;
		cout<<"next greater element is= "<<arr[i+1]<<endl;
	}
}
