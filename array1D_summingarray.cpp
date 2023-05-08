#include<bits/stdc++.h>
 
using namespace std;

int main(){
	int arr1[6]={1,2,3,4,5,6},arr2[6]={2,3,4,5,6,7},arr3[6],i;
	for(i=0; i<6; i++){
		
		arr3[i]=arr1[i]+arr2[i];
	}
	cout<<"sum of elements of array= ";
	for(i=0; i<6; i++){
		cout<<arr3[i]<<"\t";
	}
} 
