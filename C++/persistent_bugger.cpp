#include <iostream>
using namespace std;

int persistence(long long n) {
  // your code here
  int count = 0;
  while (n > 9) {
    int p = 1;
    for (int pn = n; pn > 0; pn /= 10)
      p *= pn % 10;
    n = p;
    count++;
  }
  return count;
}

int main(int argc, char *argv[]) {
  long long numbers[5] = {39, 4, 25, 999, 444};
  for (auto number : numbers)
    cout << number << " => " << persistence(number) << endl;
  return 0;
}
