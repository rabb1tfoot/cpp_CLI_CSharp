#pragma once
// MathFuncsDll.h

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif

namespace MathFuncs
{
	enum eAlphabet
	{
		A,
		B,
		C
	};
	const int golbalint = 1;
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs
	{

	private:
		int m_isalery;

		eAlphabet alpha;

		const int localint = 2;
		MATHFUNCSDLL_API int GetPrivateCurSalery();

	public:
		MATHFUNCSDLL_API static int GetStaticInt();
		MATHFUNCSDLL_API enum eAlphabet GetEnum();
		MATHFUNCSDLL_API int GetEnumint();
		MATHFUNCSDLL_API void SetCurSalery(int _amount);
		MATHFUNCSDLL_API void AddSalery(int _amount);
		MATHFUNCSDLL_API void SubSalery(int _amount);
		MATHFUNCSDLL_API int GetCurSalery();
		MATHFUNCSDLL_API int GetGolbal();
		MATHFUNCSDLL_API int Getlocal();

	};
}