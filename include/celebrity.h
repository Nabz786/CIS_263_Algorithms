#ifndef H_CELEBRITY
#define H_CELEBRITY
#include <string>

/************************************************************* 
 * This class represents an interface for our celebrity class
 * @author Runquan Ye, Nabeel Vali
 ************************************************************/

class celebrity {

	public:
		/**
	 	*Constructor to initialize a celebrity
	 	*/
		celebrity(std::string name, std::string famous_field, int desire, bool haveMet);

		/**
 		*Empty celebrity constructor
 		*/ 	
		celebrity();

		/**
		 *Returns the name of the celebrity
		 *@return string - celebrity's name
		 */
		std::string getName() const;

		/*&
 		*Returns the area in which the celebrity is famous in 
		@return string - field in which the celeb is famous in 
 		*/	 	
		std::string getArea() const;

		/**
 		*Returns how badly we want to meet the celebrity
		*@return int - how badly we want to meet 0-10 
 		*/ 	
		int getDesire() const;

		/**
 		*Whether or not we have met the celeb
		*@return bool - have met or not
 		*/	
		bool hasMet() const;

		void setName(const std::string name);

		void setDesire(const int desireVal);

		void setMet(bool met);

		friend bool operator<(const celebrity c1, const celebrity c2);

		friend bool operator<=(const celebrity c1, const celebrity c2);		

	private:
		/** celebrity's name*/
	  	std::string name;

		/** celebrity's famous field*/
	  	std::string famous_field;

		/** the degree of desire you want to see that celebrity */
	  	int desire;

		/** deet the celebrity yet; 1 for meet, 0 for not*/
	  	bool haveMet; 

};

//		bool operator<(const celebrity c1, const celebrity c2);

//		bool operator<=(const celebrity c1, const celebrity c2);
#endif
