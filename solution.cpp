#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <set>
#include <cstring>
using namespace sol422;
using namespace std;

/*takeaways
  - to form a valid square, you need to have
    words[i][j] == words[j][i]
  - since each row can have different length
    we also need to pay attention to the
    edge cases like when a row is too long
    or too short
*/

bool Solution::isValid(vector<string> &words)
{
  /* number of rows needs to be the same as the number
     of columns of the first row
  */
  if (words.size() != words[0].size())
    return false;
  /* scan each word one at a time */
  for (auto i = 0; i < words.size(); i++)
    for (auto j = 0; j < words[i].size(); j++)
      /* edge cases
         - this row is too long. Number of chars
           in this word is more than the total
           rows of the square - not possible
           to form a valid square as there will
           be not enough chars to list the word
           vertically
         - also for words[i][j] we need to check
           words[j][i], that means if row j
           isn't long enough to have the i-th col,
           the valid sqaure can't be formed
      */
      if (j >= words.size() || i >= words[j].size() ||
          /* check if it's still a valid suare */
          words[i][j] != words[j][i])
        return false;

  return true;
}