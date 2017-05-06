#include <fstream>
#include <string>
 
using namespace std;
 
ifstream in("INPUT.TXT"); 
ofstream out("OUTPUT.TXT");
///////////////////////////////////////////////////////////////
void readlong(int *a)//функция считывания числа из файла
{
    int i;
    string s;
    in>>s;
    a[0]=s.length();
    
    for (i=1; i<=a[0]; ++i)
        a[a[0]-i+1]=s[i-1]-48;
}
///////////////////////////////////////////////////////////////
void writelong(int *a)//функция записи в файл
{
    for (int i=a[0]; i>=1; --i)
        out<<a[i];
}
///////////////////////////////////////////////////////////////
void sumlong(int *a, int *b)//функция суммирования
{
    int m=0, minimal=0, c=0;
    m = (a[0] > b[0]) ? a[0] : b[0];//находим длину большего числа
    minimal=(a[0] < b[0]) ? a[0] : b[0];//находим длину меньшего числа
 
    for (int i=1; i<=minimal; i++)
    {
        c = c+a[i]+b[i];//получаем сумму
        a[i] = c%10;//оставляем в текущем разряде остаток
        c = c/10;//целую часть переносим в следующий разряд
    }
 
    if(c>0)//если целый остаток после сложения больше нуля, то
    {
        for (int i=minimal+1; i<=m; i++)
        {
            c = c+a[i]; 
            a[i] = c%10;
            c = c/10;
        }
        m++;//к длине ответа прибавляем единичку
        a[m] = c;//пишем остаток в начало
    }
    a[0]=m;//меняем длину 
}
///////////////////////////////////////////////////////////////
int main()
{
    const int MAXSIZE=100;
    int a[MAXSIZE], b[MAXSIZE];
 
    readlong(a);
    readlong(b);    
 
    sumlong(a,b);
    
    writelong(a);
 
    return 0;
}