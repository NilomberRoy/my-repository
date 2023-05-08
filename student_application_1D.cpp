#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,sum;
	cout<<"no. of elements= ";
	cin>>n;
	int student[n];
	//input
	for(int i=0; i<n; i++){
		cout<<"marks of student "<<i+1<<"=";
		cin>>student[i];
		sum=sum+student[i];
		
	}
	cout<<"total marks= "<<sum<<endl;
	cout<<"average= "<<(float)sum/n<<endl;
	float max=student[0];
	int min=student[0];
	for(int i=1; i<n; i++){
		if(max<student[i]){
		
		max=student[i];}
		
		if(min>student[i]){
		
		min=student[i];}
	}
	cout<<"max is="<<max<<endl;
	cout<<"min is="<<min<<endl;
}
