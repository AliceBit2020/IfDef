
	

/*��������� �������� ���������� ������������ ��� ������� ����� ������� ���� �������� �� ���� �����������.
����������� �������� ����� ��� ��������� ������������������� ����, ����������� ���� � �.�.

� ���������� �������� ���������� ������� : #if, #else, #elif, #endif, #ifdef, #ifndef
� � ���������� ������������ ����������� �������� ��� ������������� defined.

��������� #if ��������� ���������, ���� ��������� - ������, �� ����������� ��� �������� �� ���� �����������, ���� �� ��������� - ����,
�� ��� �� ����� ����� �� ���� �����������.������� ����� �� ���������� if, � ��� �������� ��������, ��� #if (� �.�.)
�������� �� ����������.�������������� ����� ��������� ������ ��������, ������� � ����������������(#define) � ����� �� �����
�������� � ��������� ����� ����������, ������ ��� ����������.

��� ������ � ����������� �������� ���������� ����� ������������ ���������� ���������, ��������� ��������� � �������������� ���������.

*/

#include <iostream>
#include"Define.h"

using namespace std;





void TestConditionalCompilation();


int main()
{
	TestConditionalCompilation();
}
void TestConditionalCompilation()
{
	cout << "TestConditionalCompilation()\n\n" << endl;

	// ������: ������� ����, ��� ������������ ������������������ ����������, ����� ������������� ������� � �.�.
	// ��� ������ ��������� ��������� ����� ��������������� ��������. � ����� ����, ������� ����� ������������� ����� �������� �� ����������������.
	// ���������� �������� �������� ������� OS_SPECIFIC

#if OS_SPECIFIC == LINUX
	{
		cout << "Some linux code\n" << endl;


	}
	
#elif OS_SPECIFIC == WINDOWS // elif ���������� �� ������ � else if
	{

		cout << "Some windows code\n" << endl;


	}
	
#elif OS_SPECIFIC == macOS
	cout << "Some macOS code\n";
#else 
	cout << "Other OS code\n";
#endif	// #endif - ����������� � ����� ������ ����� �������� ����������



	{




		/////��������� ������� ���� ��� ������� ��������� �������
	}



	// �����������, ��� ���������� ������������� ��� ������ �����, ����� ���������� ��������� � ����������.
	// ��������, �����-�� ���, ��������� ���������� ����������, ������� ���������� �� ����� � �������� ������ ����������.
	// �� �������� ����� ���� ������ ����� (������ ������)
	// ��� ������ �������� �������� ���������� ����� ��������� ��� �� ������ ��������� �����-���� ������

#define DEBUG

	// ���� ������ DEBUG ����, ������ ��� �������� �� ����� - ������������� ������� ����
	// ���������� ������ ����������� ������� DEBUG, ����� ��������� ���������� ��� �� �������� ������ ����������.
	// ��������� #ifdef ��������� ����������������, ���� ��� ���� - ��� �������������
#ifdef DEBUG
	cout << "Some debug code here!!" << endl << endl;
#endif

	// ��������������� ��������� #ifndef (if not defined) - ��������� ����������������, ���� ��� ��� - �� ��� �������������
#ifndef DEBUG
	cout << "ONLY IN RELEASE MODE code" << endl << endl;
#endif

	// ����� ������ �������� defined, ��������������� ��� ������������� � ��������� #if, �� ������ ���� ������� ����� �������,
	// ��� �������� �� �������������
#if defined(DEBUG) && OS_SPECIFIC == WINDOWS
	cout << "Some debug code here!! Only WINDOWS!" << endl << endl;
#endif


#if !defined(DEBUG) && OS_SPECIFIC == WINDOWS
	cout << "Some RELEASE code here!! Only WINDOWS!" << endl << endl;
#endif

	cout << "=====TestConditionalCompilation end=====\n\n";



	//��������� #undef ������� ������� ����������� ��������������.�������������, ����������� ��������� �������������� ������������ ��������������.����� ������� ����������� ������� � ������� #undef, ������� ������ ��������������������, � �� ������ ����������.
//#define WIDTH 80
//#define ADD( X, Y ) ((X) + (Y))
//	.
//		.
//		.
//#undef WIDTH
//#undef ADD



	cout << "Hello from master" << endl;



}
//  https://msdn.microsoft.com/en-us/library/3sxhs2ty.aspx
