enum Suit { clubs, diamonds, hearts, spades };
// �� 2 �� 10 ������� �����
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

/////////////////////////////////////////////////////////////
class card
{
	private:
		int number;
		Suit suit;
	public:
		card ( ); // �����������
		void set ( int, Suit ); // ��������� ��������
		void display ( );          // ����� �����
};