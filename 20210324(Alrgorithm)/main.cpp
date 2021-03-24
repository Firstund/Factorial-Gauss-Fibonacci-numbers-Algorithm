#include <iostream>

using namespace std;

int Sum(int n) // ����Լ����, ���콺�� ���� ����
{
	if (n == 1)
		return 1;
	else
		return(Sum(n - 1) + n);
}
int Factorial(int n) // ����Լ����, ���丮�� ����
{
	if (n == 1)
		return 1;
	else
		return(Factorial(n - 1) * n);
}
int Gauss(int n)// ����Լ� �̻��, ���콺�� ���� ����
{
	return(n * (n + 1) / 2);
}
int Factorial2(int n)// ����Լ� �̻��, ���丮�� ����
{
	int result = 1;

	while (n > 1)
	{
		result *= n;
		n--;
	}

	return result;
}
int Fibo(int n)// �Ǻ���ġ�Լ� ����
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