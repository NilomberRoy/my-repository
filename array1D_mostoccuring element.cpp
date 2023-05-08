#include<bits/stdc++.h>

using namespace std;

int main(){
	int num[]={1,2,3,4,5,6,6,7};
	int i,max_count=0;
	cout<<"elements are= ";
	for(i=0; i<8; i++){
		cout<<num[i]<<" ";
	}
	for(i=0; i<8; i++){
	int	count=1;
		for(int j=i+1; j<8; j++){
			if(num[i]==num[j]){
				count++;
			}}
			if(count>max_count){
				max_count=count;
			}
		
	}
	cout<<"most occuring element= ";
	for(i=0; i<8; i++){
		int count=1;
		for(int j=i+1; j<8; j++){
			if(num[i]==num[j]){
				count++;
			}}
			


    if(count==max_count){
				cout<<num[i]<<endl;
			}
		}
}
