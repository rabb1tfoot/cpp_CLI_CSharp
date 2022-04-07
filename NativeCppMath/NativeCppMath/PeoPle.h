#pragma once
#ifdef PEOPLE_EXPORTS
#define MATH_API __declspec(dllexport)
#else
#define MATH_API __declspec(dllimport)
#endif

#include <string>
#include <iostream>

class CPeople
{
private:
	int Arr[10] = {0,};
	std::string name;
	unsigned char Arrb[1024] = {0,};

public:
	MATH_API void Changevalue(int _a, int _b);
	MATH_API int Getvalue(int _idx);

	MATH_API const char* GetName();
	MATH_API void SetName(const char* _name);

	MATH_API void SetArr(const int* _arr, int _n);
	MATH_API void GetArr(int* _arr);

	MATH_API void SetByteArr(const unsigned char* _arr, int _n);
	MATH_API void GetByteArr(unsigned char* _arr);

};



