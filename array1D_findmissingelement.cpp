#include<bits/stdc++.h>
#include<iostream>

#define m 6
#define n 5
using namespace std;
//int m,n;

double missingelement(int arr1[],int arr2[]){
	int result=0;
	
	for(int i=0; i<m; i++)
	    result=result^arr1[i];
	for(int i=0; i<n; i++)
	    result=result^arr2[i];
	return result;
}

int main(){
	//int m,n;
	int arr1[m]={1,2,3,4,5,6};
	int arr2[n]={1,2,3,4,5};
	cout<<"elements of array1= ";
	for(int i=0; i<m; i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;

	cout<<"elements of array2= ";
	for(int i=0; i<n; i++){
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
		if (m != n-1 && n != m-1)
    {
        cout << "Invalid Input";
        return 0;
    }
	
	
	cout<<"missing element is= ";
	cout<<missingelement(arr1,arr2);
	return 0;    
}
