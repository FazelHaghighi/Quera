#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, j, i1, j1 = 0, k = 0;
    cin >> n;
    string name;
    string answer[n];
    getline(cin,name);
    for ( i = 0; i < n; i++)
    {
        getline ( cin, name);
        while ( name[j1] != 0) j1++;
        for ( i1 = 0; i1 < j1; i1++)
        {
            if ( name[i1] == 'A') name[i1] = 'a';
            else if ( name[i1] == 'B') name[i1] = 'b';
            else if ( name[i1] == 'C') name[i1] = 'c';
            else if ( name[i1] == 'D') name[i1] = 'd';
            else if ( name[i1] == 'E') name[i1] = 'e';
            else if ( name[i1] == 'F') name[i1] = 'f';
            else if ( name[i1] == 'G') name[i1] = 'g';
            else if ( name[i1] == 'H') name[i1] = 'h';
            else if ( name[i1] == 'I') name[i1] = 'i';
            else if ( name[i1] == 'J') name[i1] = 'j';
            else if ( name[i1] == 'K') name[i1] = 'k';
            else if ( name[i1] == 'L') name[i1] = 'l';
            else if ( name[i1] == 'M') name[i1] = 'm';
            else if ( name[i1] == 'N') name[i1] = 'n';
            else if ( name[i1] == 'O') name[i1] = 'o';
            else if ( name[i1] == 'P') name[i1] = 'p';
            else if ( name[i1] == 'Q') name[i1] = 'q';
            else if ( name[i1] == 'R') name[i1] = 'r';
            else if ( name[i1] == 'S') name[i1] = 's';
            else if ( name[i1] == 'T') name[i1] = 't';
            else if ( name[i1] == 'U') name[i1] = 'u';
            else if ( name[i1] == 'V') name[i1] = 'v';
            else if ( name[i1] == 'W') name[i1] = 'w';
            else if ( name[i1] == 'X') name[i1] = 'x';
            else if ( name[i1] == 'Y') name[i1] = 'y';
            else if ( name[i1] == 'Z') name[i1] = 'z';
        }
        for ( i1 = 0; i1 < j1; i1++)
        {
            if ( name[i1] == 32)
            {
                if ( name[i1+1] == 'a') name[i1+1] = 'A';
                else if ( name[i1+1] == 'b') name[i1+1] = 'B';
                else if ( name[i1+1] == 'c') name[i1+1] = 'C';
                else if ( name[i1+1] == 'd') name[i1+1] = 'D';
                else if ( name[i1+1] == 'e') name[i1+1] = 'E';
                else if ( name[i1+1] == 'f') name[i1+1] = 'F';
                else if ( name[i1+1] == 'g') name[i1+1] = 'G';
                else if ( name[i1+1] == 'h') name[i1+1] = 'H';
                else if ( name[i1+1] == 'i') name[i1+1] = 'I';
                else if ( name[i1+1] == 'j') name[i1+1] = 'J';
                else if ( name[i1+1] == 'k') name[i1+1] = 'K';
                else if ( name[i1+1] == 'l') name[i1+1] = 'L';
                else if ( name[i1+1] == 'm') name[i1+1] = 'M';
                else if ( name[i1+1] == 'n') name[i1+1] = 'N';
                else if ( name[i1+1] == 'o') name[i1+1] = 'O';
                else if ( name[i1+1] == 'p') name[i1+1] = 'P';
                else if ( name[i1+1] == 'q') name[i1+1] = 'Q';
                else if ( name[i1+1] == 'r') name[i1+1] = 'R';
                else if ( name[i1+1] == 's') name[i1+1] = 'S';
                else if ( name[i1+1] == 't') name[i1+1] = 'T';
                else if ( name[i1+1] == 'u') name[i1+1] = 'U';
                else if ( name[i1+1] == 'v') name[i1+1] = 'V';
                else if ( name[i1+1] == 'w') name[i1+1] = 'W';
                else if ( name[i1+1] == 'x') name[i1+1] = 'X';
                else if ( name[i1+1] == 'y') name[i1+1] = 'Y';
                else if ( name[i1+1] == 'z') name[i1+1] = 'Z';
            }
            if ( name[0] == 'a') name[0] = 'A';
                else if ( name[0] == 'b') name[0] = 'B';
                else if ( name[0] == 'c') name[0] = 'C';
                else if ( name[0] == 'd') name[0] = 'D';
                else if ( name[0] == 'e') name[0] = 'E';
                else if ( name[0] == 'f') name[0] = 'F';
                else if ( name[0] == 'g') name[0] = 'G';
                else if ( name[0] == 'h') name[0] = 'H';
                else if ( name[0] == 'i') name[0] = 'I';
                else if ( name[0] == 'j') name[0] = 'J';
                else if ( name[0] == 'k') name[0] = 'K';
                else if ( name[0] == 'l') name[0] = 'L';
                else if ( name[0] == 'm') name[0] = 'M';
                else if ( name[0] == 'n') name[0] = 'N';
                else if ( name[0] == 'o') name[0] = 'O';
                else if ( name[0] == 'p') name[0] = 'P';
                else if ( name[0] == 'q') name[0] = 'Q';
                else if ( name[0] == 'r') name[0] = 'R';
                else if ( name[0] == 's') name[0] = 'S';
                else if ( name[0] == 't') name[0] = 'T';
                else if ( name[0] == 'u') name[0] = 'U';
                else if ( name[0] == 'v') name[0] = 'V';
                else if ( name[0] == 'w') name[0] = 'W';
                else if ( name[0] == 'x') name[0] = 'X';
                else if ( name[0] == 'y') name[0] = 'Y';
                else if ( name[0] == 'z') name[0] = 'Z';
        }
        answer[k] = name;
        k++; 
    }
    for ( i = 0; i < k; i++)
    {
        cout << answer[i] << "\n";
    }
}