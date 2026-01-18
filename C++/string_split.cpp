#include <string>
#include <vector>

using namespace std;
vector<string> split(string str, string sep) {
  vector<string> fields;
  size_t pos = 0;
  size_t npos;
  string sub;
  str = str + sep;
  while ((npos = str.find(sep, pos)) != -1) {
    sub = str.substr(pos, npos - pos);
    fields.push_back(sub);
    pos = npos + 1;
  }

  return fields;
}
