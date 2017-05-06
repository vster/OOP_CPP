// misq.cpp
// метод square() для Distance
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance			  //Класс английских длин
	{
	private:
		int feet;
		float inches;
	public:			//конструктор (без аргументов)
		Distance() : feet(0), inches(0.0)  
{  }							//constructor (two args)
	Distance(int ft, float in) : feet(ft), inches(in) 
			{  }
		void showdist()		 //показать длину
			{ cout << feet << "\'-" << inches << '\"';}
		float square();		//обычный метод
	};
//---------------------------------------------------------
float Distance::square()		//возвращает квадрат
	{								//расстояния
	float fltfeet = feet + inches/12;	 //перевод во float
	float feetsqrd = fltfeet * fltfeet;  //возведение в //квадрат
	return feetsqrd;		//возвратить квадрат 
	}
///////////////////////////////////////////////////////////
int main()
	{
	Distance dist(3, 6.0);	//конструктор с 2 арг. (3'-6")
	float sqft;

	sqft = dist.square();	//вычислить квадрат расстояния
			 //показать расст. и квадрат расст. 
	cout << "\nDistance = "; dist.showdist();
	cout << "\nLength Square = " << sqft << " sq. feet\n";
	return 0;
	}


