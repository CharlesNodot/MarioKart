#include"Mario.h"

Mario::Mario():Character(){
};	

Mario::Mario(float speed,float max_speed):Character(speed, max_speed){
};

Mario::~Mario(){
};


std::string Mario::WhatAmI() const{
return "Mario";
}
