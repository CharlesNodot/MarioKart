#include"Yoshi.h"
#include<iostream>
#include<ctime>
Yoshi::Yoshi():Character(){
	srand((unsigned) time(0));
	crests_ = new int((rand() % 100)+1);
	
};


Yoshi::Yoshi(float speed, float max_speed):Character(speed,max_speed){
	crests_ = new int(5);
};

Yoshi::~Yoshi(){
	delete crests_;
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
return to_string(*crests_)+" crested Yoshi";
};


int* Yoshi::get_crests(){
	return crests_;
}
