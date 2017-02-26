#include<iostream> 
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<limits.h>
#include<time.h>
using namespace std;

int main() {									//!< Main function to generate randomized input
	srand(time(NULL));
	freopen("input.txt","w",stdout);
	//freopen("input2.txt","w",stdout);
	int i,j;
	int var1;
	char bname[15];
	char gname[10];
	cout<< "15" << endl;
 	for(i=0;i<15;i++) {							
			bname[i]=(rand()%26)+65;			//!< Generate name of the boy
			cout<< bname[i]<<" "; 
			var1=rand()%10;						//!< Generate Attraction Rate of the boy
			var1++; 
			cout<< var1 <<" ";
			var1=(rand()%1000)+1500;       		//!< Generate budget of the boy
			var1++;
			cout<< var1 <<" ";
			var1=rand()%10;                     //!< Generate intelligence level of the boy
			var1++;
			cout<< var1 <<" ";
			var1=rand()%10; 					//!< Generate Minimum attraction required for the boy
			var1++;
			cout<< var1 <<" ";
			var1=rand()%3;          			//!< Boy type: 1- Miser, 2-Generous, 3-Geek
			var1++;
			cout<< var1 <<" "<< endl;
			
	} 
	cout<<"10" <<endl;
	for(i=0;i<10;i++) {
			gname[i]=(rand()%26)+65;			//!< Name of the girl 
			cout<< gname[i]<<" "; 
			var1=rand()%10;						//!< Attraction Rate of the girl
			var1++; 
			cout<< var1 <<" ";
			var1=(rand()%1000)+1500;       		//!< Maintenance costs of the girl
			var1++;
			cout<< var1 <<" ";
			var1=rand()%10;                		//!< Intelligence level of the Girl
			var1++;
			cout<< var1 <<" ";
			var1=rand()%3; 		      			//!< Preference of the Girl :1- Most attractive 
			var1++;
			cout<< var1 << "" ;
			var1=rand()%3; 						//!< Girl type: 1- Choosy, 2-Normal, 3-Desperate
			cout<< var1 <<" "<< endl;	
		
	} 
	

} 
			
	

