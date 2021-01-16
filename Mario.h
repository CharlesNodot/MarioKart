
#ifndef MARIO_H
#define MARIO_H
#include<iostream>
#include"Character.h"
using namespace std;
class Mario: public Character
{	public:
	
	Mario();
	Mario(float speed,float max_speed);	
	std::string WhatAmI() const override;
	virtual ~Mario();
					
	protected:
	float speed_;
	float max_speed_;

};

#endif
