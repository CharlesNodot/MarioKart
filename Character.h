class Character{
	

	public:
	Character();
	Character(float speed, float max_speed);
	void Accelerate();
	void Break();
	inline float speed() const {return speed_;};
	~Character();
	float get_speed();
	float get_max_speed();

	protected:
	float speed_;
	float max_speed_;
	

};
