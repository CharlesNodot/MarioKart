#include "gtest/gtest.h"
#include "Character.cpp"

TEST(GTestTests,Dummytest){


	EXPECT_EQ(1,1);
}

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


