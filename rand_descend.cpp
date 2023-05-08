#include <iostream>
#include <cstdlib>
#include<fstream>
#include<ctime>
#include<cmath>
#include<algorithm>
using namespace std;
ofstream fout("walk5.dat");

const int particle_num = 1000;
const int range=100;
const int x_range=5;
double interval = 0.2;


double random(){
	return (double)rand() /(double)RAND_MAX	;
	
}


double randomNum(int i){

srand(time(0));  // Seed the random number generator with the current time
  double randomNumbers[50];  // Declare an array to store the 10 random numbers

  // Generate 10 random numbers from 0 to 1 and store them in the array
  for (int i = 0; i < 50; i++) {
    randomNumbers[i] = (double) rand() / RAND_MAX;
  }

  // Sort the array in descending order using the sort function with the greater comparison function
  std::sort(randomNumbers, randomNumbers + 50, std::greater<double>());

  // Output the sorted array of random numbers
  
     return randomNumbers[i]; 
  
}

double randomwalk(int x,int y, int step_num){

 
  double count[range][x_range] = {};

  srand(time(0));

  for (int i = 0; i < particle_num; i++) {
   
   double pos = 0.0;
    for (int j = 0; j < step_num; j++) {
    	

 
  for (int i = 0; i < 50; i++) {
   
  double x;
 //double x;
  
    	if(random()<0.5){	
      
      pos = pos - randomNum(x); 
      break;
  }	  
       else 
	  
      pos = pos + randomNum(x);
      break;
	  	  
    }
}

    
   int y_indx= int(pos);
double  pos_frac = pos-y_indx;
   int x_indx = int(pos_frac/interval);

    
    //1.62
    
    count[y_indx+ range/2][x_indx]= count[y_indx+range/2 ][x_indx] + 1;
  }
 
  return count[x][y];
  
}
  
int main() {

  cout<< "Final position vs number of particles:" <<endl;
  //randomwalk(100);
  
  for (int j = 0; j<range; j=j+1) {
  	for(int i=0; i<x_range; i=i+1 ){
	  
  	double graph_x=j+(i*interval)-range/2;
    
      cout <<graph_x  <<"   "<<randomwalk(j,i,50)/particle_num<<endl;
      fout <<graph_x  << "  "<<randomwalk(j,i,50)/particle_num<<endl;
    } 
	}
  

    return 0;
}


