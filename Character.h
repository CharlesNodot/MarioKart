#include<iostream>
using namespace std; 
class Character{
	

	public:
	Character();
	Character(float speed, float max_speed);
	void Accelerate();
	void Break();
	inline float speed() const {return speed_;};
	virtual ~Character();
	float get_speed();
	float get_max_speed();



	virtual std::string WhatAmI() const = 0;// A virtual table that contains all the virtual fonctions of class Character will be created. This table will also contain all overridden functions that inherits from Character class. This table class will be used to see, when a daughter class of Character is called, which virtual function will be used. By default it is the one from Character that prevails.  
	protected:
	float speed_;
	float max_speed_;
	

};
