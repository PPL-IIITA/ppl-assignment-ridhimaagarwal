#include<iostream>
#include<string.h>
#include<math.h>

class boy { 				/*! \brief BOY CLASS
 						 *         Contains attributes of all the BOYS.
 						 *
						 *  Attributes like: Name, Attraction Rate, Budget, Intelligence Level, Minimum Attraction Requirement,Status and Commitment.
 						 */
							


	public:
		char name;			//!<Name of the boy  
		int attr_rate;		//!< Attraction rate of the boy
		int budget;			//!< Budget of the boy
		int intlevel;		//!< Intelligence level of the boy
		int minattr;		//!< Minimum attraction of the boy
		bool single;		//!< Status of the boy 
	//	int happiness;		//!< Happiness of the boy
	//	int type;			//!< Boy type: 1-Miser, 2-Generous, 3- Geek 
		
	public:
		boy() 				//!< Constructor
	{
		single=true;		
	}
	
  /*	public:
		void calc_happiness(int expend, girl g)      //!< Function to evaluate happiness 
		{
			switch(type) {
			
			case 0: happiness=budget-expend;
					break;
			case 1: happiness=g.happiness;
					break;
			case 2: happiness=g.intlevel;
					break;
		}
    }  */
};
