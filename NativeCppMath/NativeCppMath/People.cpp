#include "People.h"

void CPeople::Changevalue(int _a, int _b)
{
	Arr[_a] = _b;
}

int CPeople::Getvalue(int _idx)
{
	return Arr[_idx];
}

const char* CPeople::GetName()
{
	return name.c_str();
}
void CPeople::SetName(const char* _name)
{
	name = std::string(_name);
}

void CPeople::SetArr(const int* _arr, int _n)
{
	memcpy(Arr, _arr, sizeof(int) * _n);
}

void CPeople::GetArr(int* _arr)
{
	memcpy(_arr, Arr, sizeof(int) * 10);
}

void CPeople::SetByteArr(const unsigned char* _arr, int _n)
{
	memcpy(Arrb, _arr, sizeof(unsigned char) * _n);
}

void CPeople::GetByteArr(unsigned char* _arr)
{
	memcpy(_arr, Arrb, sizeof(unsigned char) * 10);
}
