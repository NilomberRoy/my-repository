#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	cout<<"elements are= ";
	for(int i=0; i<8; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<8; i++){
		int count=0;
		for(int j=0; j<8; j++)
			if(arr[j] > arr[i]){
				count++;
			}
			
		
        if (count>=2){
			cout<<arr[i]<<" ";
		}
		
	
}
}
