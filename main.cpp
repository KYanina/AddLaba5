/*31. Удалить из текста слова, встречающиеся более одного раза. */
#include <iostream>

using namespace std;

void input(string *s, int &k)
{
    int i = 0;
    string x;
    cin >> x;
    while ( x != "." )
    {
        s[i++] = x;
        cin >> x;
        k++;
    }
}

void output(string *s, int n)
{
    int i = 0;
    while ( i < n )
        cout << s[i++] << " ";
}

void deleteword(string *s, int &n)
{
    int i, j, k;
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            if ( i != j && s[i] == s[j] )
            {
                for ( k = j; k < n-1; ++k)
                    s[k] = s[k+1];
                n--;
            }
}

int main()
{
    int n = 0;
    string s[1000];
    input(s, n);
    deleteword(s, n);
    output(s, n);
    cout << endl << n ;
    return 0;
}

