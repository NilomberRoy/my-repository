#include<bits/stdc++.h>
#define n 6

using namespace std;
int main(){
	int i,num[n],even=0,odd=0;
	
	//input	
	for(i=0; i<n; i++){
		cout<<"number of "<<i+1<<" is= ";
		cin>>num[i];
	}
	cout<<endl;
	
	for(i=0; i<n; i++){
		if(num[i] % 2 ==0){
			even+=1;
		}
		else if(num[i] % 2!=0){
			odd+=1;
		}
	}
	cout<<"number of even= "<<even<<endl;
	cout<<"number of odd= "<<odd;
	
}
