#include<iostream>
#include<stdio.h>
#include "couple2.h"

using namespace std;


int main()								 //!< Main function to initialize values 
										
{
	boy b[100];
	girl g[100];
	couple a;
	int k,j;
	
	freopen("input.txt","r", stdin);
	int i;
	int numboys, numgirls;
	cin>>numboys;
	//cout << numboys << endl;
	for(i=0;i<numboys;i++)
	{
		
		cin>> b[i].name >> b[i].attr_rate >> b[i].budget >> b[i].intlevel >> b[i].minattr;
		//cout<< b[i].name << " " << b[i].attr_rate << " " << b[i].budget << " " << b[i].intlevel << " " << b[i].minattr << endl;
	}
	cin>>numgirls;
	//cout << numgirls << endl;
	for(i=0;i<numgirls;i++)
	{
		cin>> g[i].name >> g[i].attr_rate >> g[i].maint >> g[i].intlevel >> g[i].choice;
		//cout<< g[i].name << " " << g[i].attr_rate << " " << g[i].maint << " " << g[i].intlevel << " " << g[i].choice << endl;
	}
	
	a.iscouple(b,g,numboys,numgirls);
	return 0;
}
	
