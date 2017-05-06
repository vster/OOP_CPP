enum Suit { clubs, diamonds, hearts, spades };
// от 2 до 10 обычные числа
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
		card ( ); // конструктор
		void set ( int, Suit ); // установка значения
		void display ( );          // показ карты
};