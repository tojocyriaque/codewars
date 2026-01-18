#include <string>
#include <vector>

using namespace std;
int find_short(string str) {
  vector<string> fields;
  size_t pos = 0, npos, len, min_len = 1e7;
  string sub;
  str = str + " ";
  while ((npos = str.find(" ", pos)) != -1) {
    len = npos - pos;
    sub = str.substr(pos, len);
    fields.push_back(sub);
    pos = npos + 1;
    if (len < min_len)
      min_len = len;
  }

  return min_len;
}
