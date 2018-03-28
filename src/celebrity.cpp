#include "celebrity.h"
#include <string>

/************************************************************ 
 * This class represents an interface for our celebrity class
 * @author Runquan Ye
 ***********************************************************/

	/************************************************************
	 * Constructor to initialize the celebrity
	 ***********************************************************/
	celebrity::celebrity(std::string name, std::string famous_field, int desire, int meet){
				
				  this -> name = name;
				  this -> famous_field = famous_field;
				  this -> desire = desire;
				  this -> meet = meet;
				}



	/************************************************************
	 * Returns the name of the celebrity
	 * @return string, celebrity's name
	 ***********************************************************/
	std::string getName() const{ 
		return name;
	}
