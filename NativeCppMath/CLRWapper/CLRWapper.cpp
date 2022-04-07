#include "pch.h"

#include "CLRWapper.h"
CLRWapper::CLRWapper() : People(new CPeople)
{
}

CLRWapper::~CLRWapper()
{
	if (People)
	{
		delete People;
		People = 0;
	}
	if (wrapperinstance)
	{
		delete wrapperinstance;
	}
}

void CLRWapper::Changevalue(int _a, int _b)
{
	People->Changevalue(_a, _b);
}

int CLRWapper::Getvalue(int _idx)
{
	return People->Getvalue(_idx);
}


String^ CLRWapper::GetName()
{
	String^ value;
	const char* str = People->GetName();
	value = gcnew String(str);
	return value;
}


void CLRWapper::SetName(String ^value)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(value)).ToPointer();
	People->SetName(chars);
}

void CLRWapper::SetArr(const int * _arr, int _n)
{
	People->SetArr(_arr, _n);
}

void CLRWapper::GetArr(int * _arr)
{
	People->GetArr(_arr);
}

void CLRWapper::SetByteArr(const unsigned char * _arr, int _n)
{
	People->SetByteArr(_arr, _n);
}

void CLRWapper::GetByteArr(unsigned char * _arr)
{
	People->GetByteArr(_arr);
}

CLRWapper ^ CLRWapper::GetInstance()
{
	if (wrapperinstance == nullptr)
		wrapperinstance = gcnew CLRWapper();

	return wrapperinstance;
}
