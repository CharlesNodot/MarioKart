#include "Character.h"
#include<iostream>
Character::Character(){
	speed_ = 0;
	max_speed_ = 10;
};

Character::Character(float speed, float max_speed){
	speed_ = speed;
	max_speed_ = max_speed;
	
};



float Character::get_speed(){
	return speed_;
};

float Character::get_max_speed(){
	return max_speed_;
};

Character::~Character(){
	//delete speed_;
	//delete max_speed_;
};



void Character::Accelerate(){
	if (speed_ + 1 <= max_speed_){ 
	speed_ = speed_ +1;
	}

};


void Character::Break(){
	if (speed_ - 1 <= 0){
	speed_ = 0;
	} else {
	speed_ = speed_ - 1;
	}
};	

	





