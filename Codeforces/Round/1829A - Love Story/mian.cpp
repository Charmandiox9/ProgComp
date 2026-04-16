#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;

  string target = "codeforces";

  while (x--)
  {
    string w;
    cin >> w;

    int diff = 0;
    for (int i = 0; i < target.length(); i++)
    {
      if (w[i] != target[i])
      {
        diff++;
      }
    }
    cout << diff << '\n';
  }
}