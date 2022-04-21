#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol422;

/*
Input:
[
  "abcd",
  "bnrt",
  "crmy",
  "dtye"
]

Output:
true
*/

tuple<vector<string>, bool> testFixture1()
{
  auto input = vector<string>{"abcd",
                              "bnrt",
                              "crmy",
                              "dtye"};

  return make_tuple(input, true);
}

/*

Input:
[
  "abcd",
  "bnrt",
  "crm",
  "dt"
]

Output:
true

*/

tuple<vector<string>, bool> testFixture2()
{
  auto input = vector<string>{"abcd",
                              "bnrt",
                              "crm",
                              "dt"};

  return make_tuple(input, true);
}

/*
Input:
[
  "ball",
  "area",
  "read",
  "lady"
]

Output:
false

Explanation:
The third row reads "read" while the third column reads "lead".

Therefore, it is NOT a valid word square.
*/

tuple<vector<string>, bool> testFixture3()
{
  auto input = vector<string>{"ball",
                              "area",
                              "read",
                              "lady"};

  return make_tuple(input, false);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 " << endl;
  cout << "Expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << to_string(sol.isValid(get<0>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Test 2 " << endl;
  cout << "Expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << to_string(sol.isValid(get<0>(f))) << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Test 3 " << endl;
  cout << "Expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << to_string(sol.isValid(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}