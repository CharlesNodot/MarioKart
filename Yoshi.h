#ifndef YOSHI_H
#define YOSHI_H
#include<iostream>
#include"Character.h"
using namespace std;

class Yoshi: public Character{
	public:
	Yoshi();
	Yoshi(float speed, float max_speed);
	std::string WhatAmI() const override;	
	~Yoshi();
	void Accelerate();
	int* crests_; 	
	protected:
	float speed_;
	float max_speed_;
	

};

#endif
