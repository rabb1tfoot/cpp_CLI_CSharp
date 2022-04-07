#pragma once

#include <mathFuncsDll.h>
using namespace System;

namespace ClassLib {
	public ref class ClassLib
	{
	protected:
		MathFuncs::MyMathFuncs *myMathFuncs;

	public:
		ClassLib();
		virtual ~ClassLib();
		int GetStaticInt();
		void SetCurSalery(int _amount);
		void AddSalery(int _amount);
		void SubSalery(int _amount);
		int GetCurSalery();
		MathFuncs::eAlphabet GetEnum();
		int GetGolbal();
		int Getlocal();
		int GetEnumint();

	};
}
