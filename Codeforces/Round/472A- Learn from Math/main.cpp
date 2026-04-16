#include <iostream>
using namespace std;

bool esCompuesto(int n)
{
  if (n <= 3)
    return false;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
      return true;
  }
  return false;
}

int main()
{
  int x;
  cin >> x;

  for (int i = 2; i <= x; i++)
  {
    if ((i + x - i == x) && (esCompuesto(i) && esCompuesto(x - i)))
    {
      cout << i << " " << x - i << '\n';
      break;
    }
  }
}