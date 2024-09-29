class BrazoRobotico{
	private: 
		double x, y, z;
		bool agarre;
	public:
		BrazoRobotico(double x, double y, double z, bool agarre);
		double getx();
		double gety();
		double getz();
		bool getAgarre();

		void coger();
		void soltar();
		void mover(double _x, double _y, double _z);
};
