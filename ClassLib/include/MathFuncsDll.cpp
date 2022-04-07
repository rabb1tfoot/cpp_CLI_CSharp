
#include "MathFuncsDll.h"

static int m_staticInt = 4;

int MathFuncs::MyMathFuncs::GetPrivateCurSalery()
{
	return m_isalery;
}

int MathFuncs::MyMathFuncs::GetStaticInt()
{
	return m_staticInt;
}

enum MathFuncs::eAlphabet MathFuncs::MyMathFuncs::GetEnum()
{
	return alpha;
}

int MathFuncs::MyMathFuncs::GetEnumint()
{
	return (int)alpha;
}



void MathFuncs::MyMathFuncs::SetCurSalery(int _amount)
{
	m_isalery = _amount;
}

void MathFuncs::MyMathFuncs::AddSalery(int _amount)
{
	m_isalery += _amount;
}

void MathFuncs::MyMathFuncs::SubSalery(int _amount)
{
	m_isalery -= _amount;
}

int MathFuncs::MyMathFuncs::GetCurSalery()
{
	return GetPrivateCurSalery();
}

int MathFuncs::MyMathFuncs::GetGolbal()
{
	return golbalint;
}

int MathFuncs::MyMathFuncs::Getlocal()
{
	return localint;
}
