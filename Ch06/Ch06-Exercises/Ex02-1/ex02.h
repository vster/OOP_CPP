const char ESC = 27;
const double TOLL = 0.5;

class tollBooth
{
	private:
		unsigned int totalCars;
		double totalCash;
	public:
		tollBooth();	
		void payingCar();
		void nopayCar();
		void display() const;	
};