// cardobj.cpp
// игральные карты в качестве объектов
#include <iostream>
using namespace std;
enum Suit { clubs, diamonds, hearts,spades };
const int jack = 11;         // именованные достоинства карт
const int queen = 12; 
const int king = 13;
const int ace = 14;
//////////////////////////////////////////////////////////
class card
{
	private:
		int number;              // достоинство карты
		Suit suit;               // масть
	public:
		card ()                  // конструктор без аргcardobjументов
		{ }
                   // конструктор с двум€ аргументами
		card (int n, Suit s) : number(n), suit(s)
		{ }
		void display();          // вывод карты на экран
		bool isEqual(card);      // результат сравнени€ карт
};
//--------------------------------------------------------
void card::display()         // вывод карты на экран
{
	if( number>=2 && number<=10 )
		cout << number << " ";
	else
		switch(number)
		{
			case jack:   cout << "Jack ";	break;
			case queen:  cout << "Queen ";  break;
			case king:   cout << "King ";	break;
			case ace:    cout << "Ace ";    break;
		}
		switch(suit)
		{
			case clubs:     cout << "clubs"		;break;
			case diamonds:  cout << "diamonds"  ;break;
			case hearts:    cout << "hearts"	;break;
			case spades:    cout << "spades"    ;break;
		}
}
//--------------------------------------------------------
bool card::isEqual(card c2)  // сравнение двух карт
{
	return (number==c2.number && suit==c2.suit)? true : false;
}
//////////////////////////////////////////////////////////
int main()
{
	card temp, chosen, prize;  // 3 карты
	int position;
	card card1(7, clubs);      // определение и инициализаци€ card1
	cout << "\nCard 1: ";
	card1.display();           // вывод card1
	card card2(jack, hearts);  // определение и инициализаци€ card2
	cout <<  "\nCard 2: ";
	card2.display();           // вывод card2
	card card3(ace, spades);   // определение и инициализаци€ card3
	cout <<  "\nCard 3: ";
	card3.display();           // вывод card3
	prize = card3;             // карту prize будет необходимо угадать
	cout << "\nChange places of cards 1 and 3...";
	temp = card3; card3 = card1; card1 = temp;
	cout << "\nChange places of cards 2 and 3...";
	temp = card3; card3 = card2; card2 = temp;
	cout << "\nChange places of cards 1 and 2...";
	temp = card2; card2 = card1; card1 = temp;
	cout << "\nOn which position (1,2 or 3) is ";
	prize.display();           // угадываема€ карта
	cout << " now ? ";
	cin >> position;           // ввод позиции игроком
	switch (position)
	{                          // chosen Ц карта на позиции,
		case 1: chosen = card1; break; // выбранной игроком
		case 2:	chosen = card2; break;
		case 3:	chosen = card3; break;
	}
	if(chosen.isEqual(prize))       // сравнение карт
		cout << "All right! You win!";
	else
		cout << "It's false. You loose.";
		cout << " You choose card ";
		chosen.display();               // вывод выбранной карты
		cout << endl;
	return 0;
}


