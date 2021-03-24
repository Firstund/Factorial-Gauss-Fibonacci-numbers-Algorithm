#include <iostream>

using namespace std;

int Sum(int n) // 재귀함수사용, 가우스의 계산법 구현
{
	if (n == 1)
		return 1;
	else
		return(Sum(n - 1) + n);
}
int Factorial(int n) // 재귀함수사용, 팩토리얼 구현
{
	if (n == 1)
		return 1;
	else
		return(Factorial(n - 1) * n);
}
int Gauss(int n)// 재귀함수 미사용, 가우스의 계산법 구현
{
	return(n * (n + 1) / 2);
}
int Factorial2(int n)// 재귀함수 미사용, 팩토리얼 구현
{
	int result = 1;

	while (n > 1)
	{
		result *= n;
		n--;
	}

	return result;
}
int Fibo(int n)// 피보나치함수 구현
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return(Fibo(n - 1) + Fibo(n - 2));
}
int main()
{
	cout << Factorial(9) << endl;
	cout << Factorial2(9) << endl;
	cout << Sum(100) << endl;
	cout << Gauss(100) << endl;
	cout << Fibo(8) << endl;

	return(0);
}