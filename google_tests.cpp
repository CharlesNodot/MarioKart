#include "gtest/gtest.h"
#include <string>
#include "Mario.h"
#include "Yoshi.h"
using namespace std;
TEST(GTestTests,Dummytest){


	EXPECT_EQ(1,1);
}

// Character is a virtual function that can no more be explicitly called.....
/*
TEST(GTestTest,DefaultConstructor){
	Character* Mario = new Character();
	EXPECT_EQ(0, Mario -> get_speed());
	EXPECT_EQ(10, Mario -> get_max_speed());
	delete Mario;
}


TEST(GTestTest, ParametrabelConstructor){
	Character* Luigi = new Character(9.5,15.0);
	EXPECT_EQ(9.5, Luigi -> get_speed());
	EXPECT_EQ(15.0, Luigi -> get_max_speed());
	delete Luigi;
}

TEST(GTestTest, Accelerate){
	Character* Waluigi = new Character(9,10);
	Waluigi -> Accelerate();
	EXPECT_EQ(10, Waluigi -> get_speed());
//max speed reached, normally it shouldn't be possible to accelerate anymore.
	Waluigi -> Accelerate();
	EXPECT_EQ(Waluigi -> get_speed(), Waluigi -> get_max_speed());
	delete Waluigi;
}

TEST(GTestTest, Break){
	Character* Waluigi = new Character(1,2);
	Waluigi -> Break();
	EXPECT_EQ(0, Waluigi -> get_speed());
//speed 0 reached, normally it shouldn't be possible to decelerate anymore.
	Waluigi -> Break();
	EXPECT_EQ(Waluigi -> get_speed(), 0);
	delete Waluigi;
}

TEST(GTestTest, SpeedInline){
	Character* Waluigi = new Character();
	EXPECT_EQ(Waluigi -> speed(), 0);
	delete Waluigi;
}

*/


TEST(GTestTest,MarioDefConstructor){
	Mario* p1 = new Mario();
	EXPECT_EQ(p1 -> speed(),0);
	EXPECT_EQ(p1 -> get_max_speed(),10);
	delete p1;
}

TEST(GTestTest,MarioParamConstructor){
	Mario* p1 = new Mario(10,100);
	EXPECT_EQ(p1 -> speed(),10);
	EXPECT_EQ(p1 -> get_max_speed(),100);
	delete p1;
}

TEST(GTestTest,MarioAccelerate){
	Mario* p1 = new Mario();
	p1 -> Accelerate();
	EXPECT_EQ(p1 -> speed(),1);
	delete p1;
}



TEST(GTestTest,MarioWhatAmI){
	Mario* p1 = new Mario();
	EXPECT_EQ(p1 -> WhatAmI(),"Mario");
	delete p1;
}


TEST(GTestTest,YoshiDefConstructor){
	Yoshi* y1 = new Yoshi();
	EXPECT_EQ(y1 -> speed(),0);
	EXPECT_EQ(y1 -> get_max_speed(),10);
	delete y1;
}

TEST(GTestTest,YoshiParamConstructor){
	Yoshi* y1 = new Yoshi(10,100);
	EXPECT_EQ(y1 -> speed(),10);
	EXPECT_EQ(y1 -> get_max_speed(),100);
	delete y1;
}
/*
TEST(GTestTest,YoshiWhatAmI){
	Yoshi* y1 = new Yoshi();
	EXPECT_EQ(y1 -> WhatAmI(),"Yoshi");
	delete y1;
}
*/

TEST(GTestTest,YoshiAccelerate){
	Yoshi* y1 = new Yoshi(2,10);
	y1 -> Accelerate();
	EXPECT_EQ(y1 -> speed(),3.5);
	delete y1;
}

TEST(GTestTest,AccelerationComparisonTest){
	Yoshi* y1 = new Yoshi(0,10000);
	Mario* p1 = new Mario(0,10000);
	std::vector<Character*> vect{y1 , p1};
	for(int i=0;i<50;i=i+1) 	
		for (Character* x : vect) 
        		x -> Accelerate();
	 
	EXPECT_GE(vect[0] -> speed(),vect[1] -> speed());
	for (Character* x : vect) 
        	delete x;
}

//Works no more since crests_ is random
/*TEST(GTestTest, CrestsTest){
	Yoshi* y1 = new Yoshi();
	int* val = new int(5);
	
	//cout << *(y1 -> get_crests()) << endl;
	EXPECT_EQ(5, *val);
	delete y1;
}*/


TEST(GTestTest, WhatAmICrestsTest){
	Yoshi* y1 = new Yoshi();
	EXPECT_EQ(y1 -> WhatAmI(),to_string(*(y1 -> get_crests()))+" crested Yoshi");
	delete y1;
}

// valgrind --leak-check=full          --show-leak-kinds=all          --track-origins=yes          --verbose          --log-file=valgrind-out.txt          ./run_tests 


