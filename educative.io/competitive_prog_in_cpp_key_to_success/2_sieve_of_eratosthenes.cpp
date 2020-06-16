
/* 
 *   Sieve of Eratosthenes -> O(N * log(log(N)))
 * 
 *      Steps : 
 *          1. Create a List of All Numbers 2 to N all unmarked 
 *          2. p = 2 we will mark all multiples of 2  <= N 
 *          3. Move to the next UnMarked Numbers i.e p = 3
 *          4. Stop if p > sqrt(N)
 *  
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 1000;
    vector<bool> is_prime(N + 1, true);

    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j <= N; j += i)
                is_prime[j] = false;
        }
    }

    for (int i = 2; i <= N; i++)
        if (is_prime[i])
            cout << i << " ";

    return 0;
}

/* 
 *
 *      Complexity :
 *              Outer Loop sqrt(N)
 * 
 *      Inner Loops  -> N/2 + N/3 + N/5 + N/7 + ...
 * 
 *             N[1/2+1/3+1/5+1/7] -> growth of sum of reciprocals of primes => O(log(logN))
 * 
 *      Total Time Complexity -> O(N * log(logN))
 */