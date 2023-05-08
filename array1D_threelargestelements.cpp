#include<bits/stdc++.h>

using namespace std;

void three_lar(int arr[],int array_size){
	int i,first,sec,third;
	if(i<3){
		cout<<"invalid"<<endl;
	}
	first=sec=third=INT_MIN;
	for(i=0; i<array_size; i++){
	if(arr[i]>first){
		third=sec;
		sec=first;
		first=arr[i];
	}
	else if(arr[i]>sec){
		third=sec;
		sec=arr[i];
	}
	else if(arr[i]>third){
		third=arr[i];
	}
}
	cout<<"three largest elements= "<<third<<" "<<sec<<" "<<first<<endl;

}
int main(){
	int nums[]={1,2,3,4,5,6,7};
	int n= sizeof(nums)/sizeof(nums[0]);
	cout<<"original array:";
	for(int i=0; i<n; i++){
		cout<<nums[i]<<" ";
	}
	three_lar(nums,n);
}	
