#include "celebrity.h"
#include "sorts.h"
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>


celebrity getCeleb();

std::string getRandomStr();

int main(int argc, char** argv){


//	for(int j = 0; j < 10; j++)
//		getRandomStr();

	int sortType = std::stoi(argv[1]);
	int numCelebs = std::stoi(argv[2]);

	std::vector<celebrity> celebrityList;

	for(int i = 0; i < numCelebs; i++){
		celebrityList.push_back(getCeleb());
	}

//	celebrity c1("Leonardo Dicaprio", "Acting", 9, false);
//	celebrity c2("Donald Trump", "Politics", 1, false);
//	celebrity c3("Beyonce", "Singing", 7, false);
//	celebrity c4("Taylor Swift", "Singing", 5, false);
//	celebrity c5("Rihanna", "Singing", 6, false);
//	celebrity c6("Drake", "Singing", 7, false);
//	celebrity c7("Sean Combs", "Entreprenuer", 3, false);
//	celebrity c8("Brad Pitt", "Acting", 5, false);
//	celebrity c9("Morgan Freeman", "Acting", 9, false);
//	celebrity c10("Eminem", "Singing", 1, false);

	//for(int i = 1; i <= 10; i++)
	//	celebrityList.push_back("c" + i);


//	celebrityList.push_back(c1);	
//	celebrityList.push_back(c2);	
//	celebrityList.push_back(c3);	
//	celebrityList.push_back(c4);	
///	celebrityList.push_back(c5);	
//	celebrityList.push_back(c6);	
//	celebrityList.push_back(c7);	
//	celebrityList.push_back(c8);	
//	celebrityList.push_back(c9);	
//	celebrityList.push_back(c10);	
	


	switch(sortType){
		case 1:
			bubble_sort(celebrityList);
		break;
	
		case 2:
			selection_sort(celebrityList);
		break;
	
		case 3:
			insertion_sort(celebrityList);
		break;
	
		case 4:
			mergeSort(celebrityList);
		break;
	
		case 5:
			quicksort(celebrityList);
		break;
	}
}




	celebrity getCeleb(){
		
		int randomDesire = rand() % 11;
		int randomMet = rand() % 2;
		std::string famousField = getRandomStr();
		std::string name = getRandomStr();
		celebrity c1(name, famousField, randomDesire, randomMet);				


		return c1;
	}

	std::string getRandomStr(){
		
		std::string randomStr;
		char randomChar;

		for(int i = 0; i < 8; i++){
			randomChar = rand() % 26 + 65;
			randomStr += randomChar;
		}
		
		return randomStr;
	}




