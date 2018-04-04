#ifndef H_CELEBRITY
#define H_CELEBRITY
#include <string>

/************************************************************* 
 * This class represents an interface for our celebrity class
 * @author Runquan Ye, Nabeel Vali
 ************************************************************/

class celebrity {

	public:
		/**************************************
	 	 *Constructor to initialize a celebrity
	 	 *************************************/
		celebrity(std::string name, std::string famous_field, int desire, bool haveMet);

		/**************************************
 		 *Empty celebrity constructor
 		 *************************************/ 	
		celebrity();

		/*************************************
		 *Returns the name of the celebrity
		 *@return string - celebrity's name
		 *************************************/
		std::string getName() const;

		/********************************************************
 		 *Returns the area in which the celebrity is famous in 
		 *@return string - field in which the celeb is famous in 
 		 *******************************************************/	 	
		std::string getArea() const;

		/*******************************************************
 		 *Returns how badly we want to meet the celebrity
		 *@return int - how badly we want to meet 0-10 
 		 ******************************************************/ 	
		int getDesire() const;

		/******************************************************
 		 *Whether or not we have met the celeb
		 *@return bool - have met or not
 		 *****************************************************/	
		bool hasMet() const;

		/**************************************
 		 *set the celebrity's name
		 *@param string, name
 		 *************************************/ 
		void setName(const std::string name);

		/***************************************************
 		 *set the desire that you want to see this celebrity
		 *@param int, desireVal
 		 **************************************************/ 
		void setDesire(const int desireVal);

		/*********************************************************
 		 *set a boolean to check did you meet with this celebrity
		 *@param boolean, met
 		 ********************************************************/
		void setMet(bool met);

		/****************************************************************
 		 *set a boolean to check the relationship between the celebrities
		 *@param celebrity, c1, c2
 		 ***************************************************************/
		friend bool operator<(const celebrity c1, const celebrity c2);

		/****************************************************************
 		 *set a boolean to check the relationship between the celebrities
		 *@param celebrity, c1, c2
 		 ***************************************************************/
		friend bool operator<=(const celebrity c1, const celebrity c2);		

	private:
		/** celebrity's name*/
	  	std::string name;

		/** celebrity's famous field*/
	  	std::string famous_field;

		/** the degree of desire you want to see that celebrity */
	  	int desire;

		/** met the celebrity 1 for meet, 0 for not*/
	  	bool haveMet; 

};


#endif
