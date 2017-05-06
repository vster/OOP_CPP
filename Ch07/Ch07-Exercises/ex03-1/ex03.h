//////////////////////////////////////////////////////////
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance();
		void getdist ( );	// получение информации
		void showdist ( ) const;		// показ информации
		void add_dist( Distance, Distance ); // прототип
		void div_dist( Distance, int);
};