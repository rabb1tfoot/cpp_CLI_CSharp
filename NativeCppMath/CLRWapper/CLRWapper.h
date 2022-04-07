#pragma once

#include <People.h>
#include <string>
#include <stdlib.h>
#include <msclr\marshal.h>
using namespace System;
using namespace msclr::interop;

public ref class CLRWapper
{
private:
	static CLRWapper^ wrapperinstance;

protected:
	CPeople *People;

public:
	virtual ~CLRWapper();

private:
	CLRWapper();

public:
	void Changevalue(int _a, int _b);
	int Getvalue(int _idx);

	String^ GetName();
	void SetName(String ^value);

	void SetArr(const int* _arr, int _n);
	void GetArr(int* _arr);

	void SetByteArr(const unsigned char* _arr, int _n);
	void GetByteArr(unsigned char* _arr);

public:
	static CLRWapper^ GetInstance();
};

