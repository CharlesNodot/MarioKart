#include"Yoshi.h"


Yoshi::Yoshi():Character(){
	crests_ = new int(5);
	
};


Yoshi::Yoshi(float speed, float max_speed):Character(speed,max_speed){
	crests_ = new int(5);
};

Yoshi::~Yoshi(){
};

void Yoshi::Accelerate(){
	if (speed_ + 1.5 <= max_speed_){ 
	speed_ = speed_ +1.5;
	}
	else {
		speed_ = max_speed_;
	};
	
};


std::string Yoshi::WhatAmI() const{
return "Yoshi";
};
