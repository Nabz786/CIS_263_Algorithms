#include "celebrity.h"
#include <string>

/** 
 * This class represents an interface for our celebrity class
 * @author Runquan Ye, Nabeel Vali
 */

	/**
 	*Default empty constructor for initializing a celebrity
 	*/ 	
	celebrity::celebrity(){}

	/**
	 * Constructor to initialize a celebrity with parameters
	 */
	celebrity::celebrity(std::string name, std::string famous_field, int desire, bool haveMet){
				
				  this -> name = name;
				  this -> famous_field = famous_field;
				  this -> desire = desire;
				  this -> haveMet = haveMet;
	}

	std::string celebrity::getName() const{
		return name;
	}

	std::string celebrity::getArea() const{
		return famous_field;
	}

	int celebrity::getDesire() const{
		return desire;
	}

	bool celebrity::hasMet() const{
		return haveMet;
	}

	void celebrity::setName(const std::string name){
		this -> name = name;
	}

	void celebrity::setDesire(const int desireVal){
		this -> desire = desireVal;
	}

	void celebrity::setMet(bool met){
		this -> haveMet = met;
	}

	bool operator<(const celebrity c1, const celebrity c2){
		if(c1.getDesire() > c2.getDesire()){
			return false;
		}else if(c1.hasMet() && !c2.hasMet()){
			return false;
		}
		
		if(c1.getName() > c2.getName())
			return false;
	}

	bool operator<=(const celebrity c1, const celebrity c2){
		return c1 < c2;
		
	}


