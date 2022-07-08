#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string str ;

int main()
{
    cin >> str ;
    long long cnt = 0 ;
    for (int i = 0; i < str.size(); i ++ )
    if((str[i] - '0') % 4 == 0) cnt ++ ;

    for(int i = 1 ; i < str.size() ; i ++)
    if ( !(( str[i] - '0' + (str [i - 1] - '0') * 2 ) % 4))
    cnt += i ;


    cout << cnt ;
    return 0 ;
}