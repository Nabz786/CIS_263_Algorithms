#ifndef H_CELEBRITY
#define H_CELEBRITY
#include <string>

/************************************************************* 
 * This class represents an interface for our celebrity class
 * @author Runquan Ye
 ************************************************************/

class celebrity {

	public:
		/************************************************************
	 	* Constructor to initialize the celebrity
	 	***********************************************************/
		celebrity::celebrity(std::string name, std::string famous_field, int desire, int meet);

		/************************************************************
		 * Returns the name of the celebrity
		 * @return string, celebrity's name
		 ***********************************************************/
		std::string getName()const;

	private:
		/** celebrity's name*/
	  	std::string name;

		/** celebrity's famous field*/
	  	std::string famous_field;

		/** the degree of desire you want to see that celebrity */
	  	int desire;

		/** deet the celebrity yet; 1 for meet, 0 for not*/
	  	int meet;

};

#endif
