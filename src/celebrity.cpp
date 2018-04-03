#include "celebrity.h"
#include <string>

/************************************************************ 
 * This class represents an interface for our celebrity class
 * @author Runquan Ye, Nabeel Vali
 ***********************************************************/

	/*******************************************************
 	 *Default empty constructor for initializing a celebrity
 	 ******************************************************/ 	
	celebrity::celebrity(){}

	/*******************************************************
	 * Constructor to initialize a celebrity with parameters
	 ******************************************************/
	celebrity::celebrity(std::string name, std::string famous_field, int desire, bool haveMet){
				
		this -> name = name;
		this -> famous_field = famous_field;
		this -> desire = desire;
		this -> haveMet = haveMet;
	}

	/*************************************
	 *Returns the name of the celebrity
	 *@return string - celebrity's name
	 *************************************/
	std::string celebrity::getName() const{
		return name;
	}

	/********************************************************
 	 *Returns the area in which the celebrity is famous in 
	 *@return string - field in which the celeb is famous in 
 	 *******************************************************/
	std::string celebrity::getArea() const{
		return famous_field;
	}

	/*******************************************************
 	 *Returns how badly we want to meet the celebrity
	 *@return int - how badly we want to meet 0-10 
 	 ******************************************************/ 
	int celebrity::getDesire() const{
		return desire;
	}

	/******************************************************
 	 *Whether or not we have met the celeb
	 *@return bool - have met or not
 	 *****************************************************/
	bool celebrity::hasMet() const{
		return haveMet;
	}

	/******************************************************
 	 *Whether or not we have met the celeb
	 *@return bool - have met or not
 	 *****************************************************/	
	void celebrity::setName(const std::string name){
		this -> name = name;
	}

	/*******************************************************
 	 *Returns how badly we want to meet the celebrity
	 *@return int - how badly we want to meet 0-10 
 	 ******************************************************/ 
	void celebrity::setDesire(const int desireVal){
		this -> desire = desireVal;
	}

	/*********************************************************
 	 *set a boolean to check did you meet with this celebrity
	 *@param boolean, met
 	 ********************************************************/
	void celebrity::setMet(bool met){
		this -> haveMet = met;
	}

	/****************************************************************
 	 *set a boolean to check the relationship between the celebrities
	 *@param celebrity, c1, c2
 	 ***************************************************************/
	bool operator<(const celebrity c1, const celebrity c2){
		if(c1.getDesire() > c2.getDesire()){
			return false;
		}else if(c1.hasMet() && !c2.hasMet()){
			return false;
		}
		
		if(c1.getName() > c2.getName())
			return false;
	}

	/****************************************************************
 	 *set a boolean to check the relationship between the celebrities
	 *@param celebrity, c1, c2
 	 ***************************************************************/
	bool operator<=(const celebrity c1, const celebrity c2){
		return c1 < c2;
		
	}


