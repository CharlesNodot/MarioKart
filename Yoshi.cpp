#include"Yoshi.h"


Yoshi::Yoshi():Character(){
};


Yoshi::Yoshi(float speed, float max_speed):Character(speed,max_speed){
};

Yoshi::~Yoshi(){
};

std::string Yoshi::WhatAmI() const{
return "Yoshi";
};
