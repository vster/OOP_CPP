// cardenum.cpp
// карточная игра с использованием перечислений
#include <iostream>
using namespace std;

const int jack = 11;              // именованные достоинства карт 
const int queen = 12;
const int king = 13;
const int ace = 14;
enum Suit { clubs, diamonds, hearts, spades };

//////////////////////////////////////////////////////////
struct card
{
	int number;                     // достоинство карты
	Suit suit;                      // масть
};

//////////////////////////////////////////////////////////
int main()
{
	card temp, chosen, prize;       // определение карт
	int position;
	card card1 = { 7, clubs };      // инициализация card1
	cout << "Card 1: 7 clubs\n";
	card card2 = { jack, hearts };  // инициализация card2
	cout << "Card 2: jack hearts\n";
	card card3 = { ace, spades };   // инициализация card3
	cout << "Card 3: ace spades\n";
	prize = card3;                  // запоминаем карту 3
	cout << "Change places of card 1 and card 3\n";
	temp = card3; card3 = card1; card1 = temp;
	cout << "Change places of card 2 and card 3\n";
	temp = card3; card3 = card2; card2 = temp;
	cout << "Change places of card 1 and card 2\n";
	temp = card2; 	card2 = card1; 	card1 = temp;
	cout << "On which position (1,2 or 3) is ace spades now? ";
	cin >> position;
	switch (position)
	{
		case 1: chosen = card1; break;
		case 2: chosen = card2; break;
		case 3: chosen = card3; break;
	}
	if( chosen.number == prize.number && // сравнение карт
		chosen.suit == prize.suit )
		cout << "True! You win!\n";
	else
		cout << "False. You loose.\n ";
	return 0;
}


