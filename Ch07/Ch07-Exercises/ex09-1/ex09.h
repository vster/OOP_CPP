///////////////////////////////////////////////////////////
class Queue
{
	private:
		enum { MAX = 5 };
		int buf [ MAX ];    
		int head, tail, qsize;           
	public:
		Queue ( ); // �����������
		void put(int);	
		int get();
};
