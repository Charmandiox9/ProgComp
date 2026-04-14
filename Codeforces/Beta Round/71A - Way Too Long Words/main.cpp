#include <iostream>
#include <string>
using namespace std;

string recomposition(string word)
{
  int size = word.length();
  if (size > 10)
  {
    return word[0] + std::to_string(size - 2) + word[size - 1];
  }
  return word;
}

int main()
{
  int x;
  cin >> x;

  for (int i = 0; i < x; i++)
  {
    string word;
    cin >> word;
    cout << recomposition(word) << endl;
  }
}