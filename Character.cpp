#include "Character.h"
#include<iostream>
Character::Character(){
	speed_ = 0;
	max_speed_ = 10;
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


/*
void Character::Accelerate(){
	if (speed_ + 1 <= max_speed_){ 
	speed_ = speed_ +1;
	} else{
	std::cout<<"Trop de vitesse...."<<std::endl;

};

void Character::Break(){
	if (speed_ - 1 <= 0){
	speed_ = 0;
	std::cout<<"Vitesse zéro...."<<std::endl;
	} else {
	speed_ = speed_ - 1;
	}
};*/	

//Character::inline const float speed(){
//	const float speed = speed_;
//	return speed_;
//	};	





