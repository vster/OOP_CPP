//////////////////////////////////////////////////////////
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance();
		void getdist ( );	// ��������� ����������
		void showdist ( ) const;		// ����� ����������
		void add_dist( Distance, Distance ); // ��������
		void div_dist( Distance, int);
};