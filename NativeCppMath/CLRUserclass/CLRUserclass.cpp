#include "pch.h"
#include "CLRUserclass.h"


CLRUserclass::CLRUserclass()
{
	instance = CLRWapper::GetInstance();
}

CLRUserclass::~CLRUserclass()
{
	if (instance != nullptr)
		delete instance;
}

void CLRUserclass::open()
{
	if (configurationTool == nullptr)
	{
		configurationTool = gcnew UserControl1;
	}
	else
	{
		return;
	}

	//configurationTool->DelegateNotifyClosed  += gcnew UserControl1.DelegateNotifyClosed(configurationTool, CLRUserclass::NotifyClose);
	configurationTool->SendDel += gcnew UserControl1::DelegateNotify((CLRUserclass^)this, &CLRUserclass::NotifyClose);

	configurationTool->ShowDialog();
}

void CLRUserclass::NotifyClose()
{
	delete configurationTool;
	configurationTool = nullptr;
}

void CLRUserclass::Changevalue(int _a, int _b)
{
	instance->Changevalue(_a, _b);
}

int CLRUserclass::Getvalue(int _idx)
{
	return instance->Getvalue(_idx);
}

String ^ CLRUserclass::GetName()
{
	return instance->GetName();
}

void CLRUserclass::SetName(String ^ value)
{
	instance->SetName(value);
}

void CLRUserclass::SetArr(const int * _arr, int _n)
{
	instance->SetArr(_arr, _n);
}

void CLRUserclass::GetArr(int * _arr)
{
	instance->GetArr(_arr);
}

void CLRUserclass::SetByteArr(const unsigned char * _arr, int _n)
{
	instance->SetByteArr(_arr, _n);
}

void CLRUserclass::GetByteArr(unsigned char * _arr)
{
	instance->GetByteArr(_arr);
}
