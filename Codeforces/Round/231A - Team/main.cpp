#include <iostream>
using namespace std;

bool willContest(int p, int v, int t)
{
  if ((p == 1 && v == 1) || (p == 1 && t == 1) || (v == 1 && t == 1))
  {
    return true;
  }
  return false;
}

int main()
{
  int x;
  cin >> x;

  int numberOfProblemsWillContest = 0;

  for (int i = 0; i < x; i++)
  {
    int p, v, t;
    cin >> p >> v >> t;
    numberOfProblemsWillContest += willContest(p, v, t) == true ? 1 : 0;
  }

  cout << numberOfProblemsWillContest;
}