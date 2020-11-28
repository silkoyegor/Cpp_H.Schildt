#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Sort(vector<int>& v) {
  sort(begin(v), end(v));
};

void PrintVector(const vector<int>& v) {
  for (auto x : v) {
    cout << x << " ";
  }
  cout << "\n";
};

int main()
{
  cout << "10_sort_vector" << endl;

  vector<int> nums = {3, 6, 1, 2, 0, 2};
  Sort(nums);
  PrintVector(nums);

  return 0;
}
