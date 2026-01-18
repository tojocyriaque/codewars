#include <cmath>
using namespace std;
int digPow(int n, int p) {
  int diz = 1, cpow, k;
  for (diz = 1; n > diz * 10; diz *= 10)
    ;

  for (int pw = p; diz > 0; pw++ && (diz /= 10)) {
    cpow += pow(k = (n / diz) % 10, pw);
  }
  return cpow % n == 0 ? cpow / n : -1;
}
