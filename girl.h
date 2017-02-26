#include<iostream> 
#include<stdlib.h>
#include<stdio.h>

class girl {					/*! brief girl CLASS
 						 *         Contains attributes of all the girls.
 						 *
						 *  Attributes like: Name, Attraction Rate, Maintenance, Intelligence Level, Boy preference, Status, Happiness and Type 
 						 */

	public: 
		char name;				//!< Name of the girl
		int attr_rate;			//!< Attraction Rate of the girl
		int maint;				//!< Maintenance costs of the Girl
		int intlevel;			//!< Intelligence level of the Girl
		int choice;  			//!< Boy preference of the girl: 1- most attractive, 2-richest, 3-most intelligent 
		bool single;			//!< Status of the girl 
		int happiness;			//!< Happiness of the girl 
		int type;             	//!< Girl type: 1-Choosy, 2-Normal, 3-Desperate 
		
	public:
		girl() 					//!< Constructor 
	{
		single=true;			
	}
	
	
};
