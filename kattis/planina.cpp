#include <bits/stdc++.h>

using namespace std;

long long int fun(long long int iteration_count) {
  if (iteration_count == 0) return 2;
  int previous_iteration_count = fun(iteration_count - 1);
  return previous_iteration_count + previous_iteration_count - 1;
}
int main() {
  long long int n;
  cin >> n;
  long long int number_of_dots_in_single_side = fun(n);
  cout << number_of_dots_in_single_side * number_of_dots_in_single_side;
  return 0;
}
