# Key To Success In CP

## Min / Max

```cpp
    int a = 7;
    int b = 4;

    int M = max(a,b);
    int m = min(a,b);
```

## Swap

```cpp
    int a = 5;
    int b = 8;

    swap(a,b);
```

- using auto

## Pair

```cpp
    struct Point {
        int x;
        int y;
    };

    pair<int,int> coord = {x,y};
    pair<int,int> coord = make_pair(x,y);


    int x = coord.first;
    int y = coord.second;
```

## Harmonic Series

```cpp
for (int i = 1; i <= N; i++)
    for (int j = i; j <= N; j += i)
        x++;
// TC NlogN
```

## Factorization

### Brute Force

```cpp
#include <iostream>
#include <fstream>
#define lli long long int
using namespace std;

int print_factors_count(lli N) {
  int cnt = 0;

  for (int i = 1; i <= N; i ++)
    if (N % i == 0)
      cnt ++;

  return cnt;
}

int main() {
  ifstream cin("input.txt");

  int N;
  cin >> N;
  cout << print_factors_count(N);

  return 0;
}
```

### Optimized (root(n))

```cpp

#include <iostream>
#include <fstream>
#define lli long long int
using namespace std;

int print_factors_count(lli N) {
  int cnt = 0;

  for (int i = 1; i * i <= N; i ++)
    if (N % i == 0) {
      cnt ++;
      if (i != N/i)
        cnt ++;
    }

  return cnt;
}

int main() {
  ifstream cin("input.txt");

  int N;
  cin >> N;
  cout << print_factors_count(N);
  return 0;
}
```

### Optimized Prime Number

```cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

string is_prime(int N) {
    // tc rootn
  for (int i = 2; i * i <= N; i ++)
    if (N % i == 0) {
      return "no";
    }
  return "yes";
}

int main() {
  ifstream cin("input.txt");
  int T, N;

  cin >> T;
  while (T--) {
    cin >> N;
    cout << is_prime(N) << "\n";
  }
  return 0;
}
```

## Arithmetic Progression

- ​nth term an​​ = a+(n−1)d

- sum = n / 2 [ 2 *a + d * (n-1) ]

## Geometric Progression

- nth term = a \* r ^ n - 1
- sum a (1-r^n) / 1 - r

### Infinite geometric progression

- sum = a / 1 - r

## Permutations

- n!

### with repetition

- n^k

### without repetition

- P(n,k) = n! / (n - k)!

## Combinations

### Without repetition

- C(n,k) = p(n,k) / k! => n! / (n-k)! . k!

## Strings

### Anagrams

- The anagram of a string is obtained by rearranging the letters in the string.

- Ex: evil and live are anagrams

### Substring

- Substring is a contiguous sequence of characters within a string. Analogous to subarray in arrays

- For example: for the string competitive
  comp, tive, and pet are substrings. cope is not because it’s not contiguous in competitive.

- we have (n \* n-1) / 2 + N substrings in a string of Length N

### Subsequence

- A subsequence of a sequence is obtained by deleting some or none of the elements without changing the order of elements. Similar to what we discussed in arrays.

- For example, for the string competitive : cope and pit are subsequences but tom is not.

- There are 2^N2​N​​ subsequences of a string of length NNN.

### Append

```cpp
  string s; // empty string

  s.size(); // get size()
  s[i] // access character

  // Insertion at end O(1)
  // Insertion in between O(N)
  // deleting last character O(1)
  // Deleting other characters O(N)

  string s1;

  string s2 = "str";

  s1.append(s2) // s1 = "str"

  s1.push_back("i"); // s1 = "stir"

  s1 += "ng" // "string"


```

### Delete

```cpp
  string s = "example string";

  s.erase(s.begin()+7) // s = "examplestring" -> iterator to remove 1 charater
  s.erase(4,6); // examings.erase(4, 6); // s = "examing"
```

### Substring in C++

```cpp
    string s = "hello world";

    s.substr(0,4); // hell

```

## Binary Tree

### Full Binary Tree

- Every node has either zero or two children.

### Complete Binary Tree

- All levels except the last level are completely filled. In the last level, all the nodes are filled from left to right.
- Heap, which we will discuss in later lessons, is an example of a complete binary tree.

### Perfect Binary Tree

- A binary tree where all internal nodes have two children and all leaves are at the same level is a perfect binary tree.

- A perfect binary tree of height h has 2^h - 1 nodes
