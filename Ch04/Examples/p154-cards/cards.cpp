// cards.cpp
// представление игральных карт при помощи структуры
#include <iostream>
using namespace std;

const int clubs = 0;              // масти
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;              // достоинства карт
const int queen = 12;
const int king = 13;
const int ace = 14;

//////////////////////////////////////////////////////////
struct card
{
	int number;                     // достоинство
	int suit;                       // масть
};

//////////////////////////////////////////////////////////
int main()
{
	card temp, chosen, prize;         // три карты
	int position;
	card card1 = { 7, clubs };      // инициализация карты 1
  
	cout << "Card 1: 7 tref\n";
	card card2 = { jack, hearts }; // инициализация карты 2
	cout << "Card 2: jack hearts\n";
	card card3 = { ace, spades };   // инициализация карты 3
	cout << "Card 3: ace spades\n";
	prize = card3;                  // запоминание карты 3
	cout << "Change places of card 1 and card 3...\n";
	temp = card3; card3 = card1; card1 = temp;
	cout << "Change places of card 2 and card 3...\n";
	temp = card3; card3 = card2; card2 = temp;
	cout << "Change places of card 1 and card 2...\n";
	temp = card2; card2 = card1; card1 = temp;
	cout << "On witch position (1,2 or 3) is ace spades now? ";
	cin >> position;
	switch (position)
	{
		case 1: chosen = card1; break;
		case 2: chosen = card2; break;
		case 3: chosen = card3; break;
	}
	if(chosen.number == prize.number && // сравнение карт
		chosen.suit == prize.suit)
		cout << "True! You win!\n";
	else
		cout << "False. You loose.\n";
	return 0;
}


