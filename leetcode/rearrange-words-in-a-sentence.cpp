#include <bits/stdc++.h>

using namespace std;

class Solution {
  private:
    bool isCapital(char x) {
      int val = (int) x;
      if (val >= 65 && val <= 90)
        return true;
      else
        return false;
    }
    char convertoCap(char x) {
      if (!this->isCapital(x)) {
        x = (char) (((int) x) - 32);
      }
      return x;
    }
    char convertoLow(char x) {
      if (this->isCapital(x)) {
        x = (char) (((int) x) + 32);
      }
      return x;
    }
  public:
    string arrangeWords(string text) {
      vector<string> v;

      string x = "";
      for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
          x += this->convertoLow(text[i]);
        } else {
          v.push_back(x);
          x = "";
        }
      }
      v.push_back(x);
      x = "";

      stable_sort(v.begin(), v.end(), [](const string &a, const string &b) {
        return a.length() < b.length();
      });


      for (vector<string>::iterator i = v.begin(); i != v.end(); i++) {
        string temp = *i;
        if (x == "") {
          temp[0] = this->convertoCap(temp[0]);
        }
        x += temp;
        x += " ";
      }
      x.pop_back();

      return x;
    }
};

int main() {
  Solution obj;
  cout << obj.arrangeWords("Jlhvvd wfwnphmxoa qcuucx qsvqskq cqwfypww dyphntfz hkbwx xmwohi qvzegb ubogo sbdfmnyeim tuqppyipb llwzeug hrsaebveez aszqnvruhr xqpqd ipwbapd mlghuuwvec xpefyglstj dkvhhgecd kry") << endl;
  return 0;
}
