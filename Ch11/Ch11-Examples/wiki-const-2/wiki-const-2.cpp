#include <iostream>
 
class Array
{
  public:
    int size;
    int* data;
 
    Array(int size)
        : size(size), data(new int[size]) {}
 
	Array(Array const& copy)
	: size(copy.size), data(new int[copy.size]) 
	{
		std::copy(copy.data, copy.data + copy.size, data);    // #include <algorithm> для std::copy
	}
    
	~Array() 
    {
        delete[] data;
    }
};
 
int main()
{
    Array first(20);
    first.data[0] = 25;
 
    {
        Array copy = first;
 
        std::cout << first.data[0] << " " << copy.data[0] << std::endl;
 
    }    // (1)
 
    first.data[0] = 10;    // (2)
}