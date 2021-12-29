#include <iostream>
using namespace std;

void exgcd(int m, int b)
{
  int a1 = 1, a2 = 0;
  int b1 = 0, b2 = 1;
  int a3 = m, b3 = b;
  int q, t1, t2, t3;
  while (b3 != 1)
  {
    if (b3 == 0)
    {
      break;
    }
    q = a3 / b3;
    t1 = a1 - q * b1;
    t2 = a2 - q * b2;
    t3 = a3 - q * b3;
    a1 = b1;
    a2 = b2;
    a3 = b3;
    b1 = t1;
    b2 = t2;
    b3 = t3;
  }
  if (b3 == 1)
  {
    if (b2 < 0)
      cout << "\nKet qua tinh theo Euclid mo rong la:" << m + b2 << endl;
    else
      cout << "\nKet qua tinh theo Euclid mo rong la:" << b2 << endl;
  }
  else
    cout << "Khong co so nghich dao";
}

int TheoDinhNghia(int a, int n)
{
  for (int i = 1; i < n; i++)
  {
    if (((a % n) * (i % n)) % n == 1)
      return i;
  }
}
main()
{
  int a = 2656;
  int n = 5741;
  exgcd(n, a);
  cout << "Ket qua tinh theo dinh nghia la:" << TheoDinhNghia(a, n) << endl;
  system("pause");
}