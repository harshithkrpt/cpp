/* 
 *   - Raw String Literals
 *      Even Lambda Functions are functional literal
 *      
 *      Raw String acts as helpers to path and regular expressions 
 * 
 *
 */

#include <iostream>
using namespace std;

void print(const string inp)
{
    cout << inp << endl;
}

int main()
{
    int unsigned_int = u'U'; // Unsigned Integer
    int hex = 0x2a;
    string raw = R"("This is a Raw String ")";

    cout << unsigned_int << ' ' << hex << ' ' << raw << endl;
    raw = R"(Raw String)"; // Sep (maximal 16 characters long, no spaces, backslashes or colons)
    print(raw);
    raw = R"Sep(this is Raw)Sep";
    print(raw);
    raw = R"(C:\temp\newfile.txt)";
    print(raw);
}
