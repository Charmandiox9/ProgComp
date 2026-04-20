#include <iostream>
using namespace std;
#include <cmath>

long long obtenerRadical(int n)
{
  long long res = 1;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      res *= i;
      while (n % i == 0)
        n /= i;
    }
  }
  if (n > 1)
    res *= n;
  return res;
}

int main()
{

  int x;
  if (!(cin >> x))
    return 0;

  while (x--)
  {
    int n;
    cin >> n;
    if (n == 0)
      cout << 0 << "\n";
    else
      cout << obtenerRadical(n) << "\n";
  }
  return 0;
}