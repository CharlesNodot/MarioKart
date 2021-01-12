class Character{
	

	public:
	Character();
	//void Accelerate();
	//void Break();
	//inline const float speed();
	~Character();
	float get_speed();
	float get_max_speed();

	protected:
	float speed_;
	float max_speed_;
	

};
