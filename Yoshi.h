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
	int* get_crests();	
	protected:
//pour une raison que j'aimerais éclaircir, la déclaration de ces deux attributs empêchent leur accès à la méthode Accelerate() des classes Character et Yoshi.
	//float speed_;
	//float max_speed_;
	int* crests_; 

};

#endif
