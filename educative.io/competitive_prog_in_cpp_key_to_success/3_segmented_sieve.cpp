/* 
 *  Segmented Sieve
 *       Given two integers, NNN and MMM, print all primes between NNN and MMM (both inclusive).
 * 
 * TODO start = (((N - 1) / i) + 1) * i; CHECK THIS
 */
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> is_prime(M - N + 1, true);

    for (int i = 2; i * i <= M; i++)
    {
        int start = (((N - 1) / i) + 1) * i;
        for (int j = start; j <= M; j += i)
        {
            if (j >= N && j <= M)
            {
                is_prime[j - N] = false;
            }
        }
    }

    for (int i = 0; i < is_prime.size(); i++)
    {
        if (is_prime[i])
        {
            cout << i + N << " ";
        }
    }

    return 0;
}

/* 
 *  Time Complexity :   
 *      i = 2 , M-N/2
 *      i = 3 , M-N/2
 * 
 *      i = sqrt(M),M-N/sqrt(M)
 * 
 *       TC :  O((M-N) * logM)
 */