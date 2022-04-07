#include "pch.h"

#include "ClassLib.h"
namespace ClassLib
{

	ClassLib::ClassLib() : myMathFuncs(new MathFuncs::MyMathFuncs)
	{
		myMathFuncs;
	}


	ClassLib::~ClassLib()
	{
		if (myMathFuncs)
		{
			delete myMathFuncs;
			myMathFuncs = 0;
		}
	}
	int ClassLib::GetStaticInt()
	{
		return myMathFuncs->GetStaticInt();
	}
	void ClassLib::SetCurSalery(int _amount)
	{
		myMathFuncs->SetCurSalery(_amount);
	}
	void ClassLib::AddSalery(int _amount)
	{
		myMathFuncs->AddSalery(_amount);
	}
	void ClassLib::SubSalery(int _amount)
	{
		myMathFuncs->SubSalery(_amount);
	}
	int ClassLib::GetCurSalery()
	{
		return myMathFuncs->GetCurSalery();
	}
	MathFuncs::eAlphabet ClassLib::GetEnum()
	{
		return myMathFuncs->GetEnum();
	}
	int ClassLib::GetGolbal()
	{
		return myMathFuncs->GetGolbal();
	}
	int ClassLib::Getlocal()
	{
		return myMathFuncs->Getlocal();
	}
	int ClassLib::GetEnumint()
	{
		return myMathFuncs->GetEnumint();
	}
}