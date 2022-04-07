#pragma once

#include <msclr\marshal.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace msclr::interop;
using namespace System::Runtime::InteropServices;
using namespace System::Xaml;
using namespace System;
using namespace WpfUI;

public ref class CLRUserclass
{
public:
	CLRUserclass();
	virtual ~CLRUserclass();

public:
	void open();

public:
	void Changevalue(int _a, int _b);
	int Getvalue(int _idx);

	String^ GetName();
	void SetName(String ^value);

	void SetArr(const int* _arr, int _n);
	void GetArr(int* _arr);

	void SetByteArr(const unsigned char* _arr, int _n);
	void GetByteArr(unsigned char* _arr);

private:
	void NotifyClose();
	static UserControl1 ^configurationTool;
	CLRWapper^ instance;
};
