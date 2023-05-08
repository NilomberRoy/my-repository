#include<bits/stdc++.h>
#define n 6
using namespace std;
int main(){
	int i,num[n];
	for(i=0; i<6; i++){
		cout<<"number "<<i+1<<"is=";
		cin>>num[i];
	}
	cout<<endl;
	cout<<"outputs are=";
	for(i=0; i<6; i++){
		cout<<num[i]<<"\t";
	}
	int max=num[0];
	for(i=0; i<n; i++){
	if(max<num[i]){
		max=num[i];
	}
}
	cout<<"max is= "<<max<<endl;
	int sec_max;
	
	int pos=6;
	for(i=pos-1; i<=n-1; i++){
		num[i]=num[i+1];
	}
	
	sec_max=num[0];
	for(i=0; i<5; i++){
		if(sec_max<num[i]){
			sec_max=num[i];
		}
	}
	cout<<"second max is= "<<sec_max;
}
