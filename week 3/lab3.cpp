//3.1
/*#include<iostream>
using namespace std;

int power(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return power(x, n - 1) * x;
	}
}
int main() {

	for (int n = 0; n < 20; n++) {

		cout << power(2, n) << endl;
	}
} */

//3.2
/*#include<iostream>
using namespace std;
int ack(int m, int n)
{
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
		return ack(m - 1, 1);
	else if (m > 0 && n > 0)
		return ack(m - 1, ack(m, n - 1));
}
int main()
{
	cout << ack(3, 4) << endl;
}*/

//3.3
//void print(int n) {
//	if (n == 0)
//		cout << "0";
//	else {
//		cout << n << endl;
//		print(n - 1);
//	}
//}
//int cbc(int n, int k) {
//	if (n == k)
//		return 1;
//	else if (k == 0)
//		return 1;
//	else if (n > 1 && k > 0)
//		return cbc(n - 1, k - 1) + cbc(n - 1, k);
//}
//bool isPrime(int n, int i = 2)
//{
//	if (n <= 2)
//		return (n == 2) ? true : false;
//	if (n % i == 0)
//		return false;
//	if (i * i > n)
//		return true;
//	return isPrime(n, i + 1);
//}
//int main() {
//	int num = 20;
//	int nB = 4, kB = 5;
//	cout << isPrime(kB) << endl;
//	cout<<"Binomial computation: " << cbc(nB, kB);
//	print(num);
//}