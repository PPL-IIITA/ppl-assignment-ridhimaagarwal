#include<iostream>
#include<stdio.h>
#include "boy.h"
#include "girl.h"

using namespace std;                 

class couple					/*! \brief couple CLASS
 						 *         Contains objects of girl and boy classes and a function to pair a boy and a girl
						  			 
 						 */
{
	public:
		boy b;
		girl g;
	
	
	public:
		void iscouple(boy b1[],girl g1[],int numboys, int numgirls) 		//!< Function to pair boys and girls
		{
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
			int i,j;
			int max,temp; 
			int count;
			bool flag; 
			for(i=0;i<numgirls;i++)
			{
				max=0;
				temp=0;
				if(g1[i].single==true) {
					if(g1[i].choice==1) {
						max=0;
						temp=0;
						for(j=0;j<=numboys;j++) {
							if(b1[j].single==true && b1[j].budget>=g1[i].maint && g1[i].attr_rate>=b1[j].minattr && b1[j].attr_rate>max) 
					{
						max=b1[j].attr_rate;
						temp=j;
						flag=true;
					} 
				}
					if(flag==true) {
						b1[j].single=false;
						g1[i].single=false;
						cout << "Boy" << b1[temp].name << " " << "Girl" << g1[i].name << endl;
					}
				}
				else if (g1[i].choice==2) {
						max=0;
						temp=0;
						for(j=0;j<=numboys;j++) {
							if(b1[j].single==true && b1[j].budget>=g1[i].maint && g1[i].attr_rate>=b1[j].minattr && b1[j].budget>max) 
					{
						max=b1[j].budget;
						temp=j;
						flag=true;
					}
				}
					if(flag==true) {
						b1[j].single=false;
						g1[j].single=false;
						cout << "Boy" << b1[temp].name << " " << "Girl" << g1[i].name << endl;	
					}
				}
				else if(g1[i].choice==3) {
						max=0;
						temp=0;
						for(j=0;j<=numboys;j++) {
							if(b1[j].single==true && b1[j].budget>=g1[i].maint && g1[i].attr_rate>=b1[j].minattr && b1[j].intlevel>max) 
					{
						max=b1[j].budget;
						temp=j;
						flag=true;
					}
				}
					if(flag==true) {
						b1[j].single=false;
						g1[j].single=false;
						cout << "Boy" << b1[temp].name << " " << "Girl" << g1[i].name << endl;
					}
				}
			
			}
		}
	}
};
 
						
						
						
