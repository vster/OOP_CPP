// cardobj.cpp
// ��������� ����� � �������� ��������
#include <iostream>
using namespace std;
enum Suit { clubs, diamonds, hearts,spades };
const int jack = 11;         // ����������� ����������� ����
const int queen = 12; 
const int king = 13;
const int ace = 14;
//////////////////////////////////////////////////////////
class card
{
	private:
		int number;              // ����������� �����
		Suit suit;               // �����
	public:
		card ()                  // ����������� ��� ���cardobj�������
		{ }
                   // ����������� � ����� �����������
		card (int n, Suit s) : number(n), suit(s)
		{ }
		void display();          // ����� ����� �� �����
		bool isEqual(card);      // ��������� ��������� ����
};
//--------------------------------------------------------
void card::display()         // ����� ����� �� �����
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
bool card::isEqual(card c2)  // ��������� ���� ����
{
	return (number==c2.number && suit==c2.suit)? true : false;
}
//////////////////////////////////////////////////////////
int main()
{
	card temp, chosen, prize;  // 3 �����
	int position;
	card card1(7, clubs);      // ����������� � ������������� card1
	cout << "\nCard 1: ";
	card1.display();           // ����� card1
	card card2(jack, hearts);  // ����������� � ������������� card2
	cout <<  "\nCard 2: ";
	card2.display();           // ����� card2
	card card3(ace, spades);   // ����������� � ������������� card3
	cout <<  "\nCard 3: ";
	card3.display();           // ����� card3
	prize = card3;             // ����� prize ����� ���������� �������
	cout << "\nChange places of cards 1 and 3...";
	temp = card3; card3 = card1; card1 = temp;
	cout << "\nChange places of cards 2 and 3...";
	temp = card3; card3 = card2; card2 = temp;
	cout << "\nChange places of cards 1 and 2...";
	temp = card2; card2 = card1; card1 = temp;
	cout << "\nOn which position (1,2 or 3) is ";
	prize.display();           // ����������� �����
	cout << " now ? ";
	cin >> position;           // ���� ������� �������
	switch (position)
	{                          // chosen � ����� �� �������,
		case 1: chosen = card1; break; // ��������� �������
		case 2:	chosen = card2; break;
		case 3:	chosen = card3; break;
	}
	if(chosen.isEqual(prize))       // ��������� ����
		cout << "All right! You win!";
	else
		cout << "It's false. You loose.";
		cout << " You choose card ";
		chosen.display();               // ����� ��������� �����
		cout << endl;
	return 0;
}


