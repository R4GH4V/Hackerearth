/*
You are given a string S. Count the number of occurrences of all the digits in the string S.

Input: 
First line contains string S.

Output: 
For each digit starting from 
0
0 to 
9
9, print the count of their occurrences in the string 
S
S. So, print 
10
10 lines, each line containing 
2
2 space separated integers. First integer 
i
i and second integer count of occurrence of 
i
i. See sample output for clarification.

Constraints:
 1
≤
|
S
|
≤
100
1≤|S|≤100
SAMPLE INPUT 
77150
SAMPLE OUTPUT 
0 1
1 1
2 0
3 0
4 0
5 1
6 0
7 2
8 0
9 0

*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    int c[10]={0};
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        int z=s[i]-'0';
        switch(z)
        {
            case 0:
            c[0]++;
            break;
            case 1:
            c[1]++;
            break;
            case 2:
            c[2]++;
            break;
            case 3:
            c[3]++;
            break;
            case 4:
            c[4]++;
            break;
            case 5:
            c[5]++;
            break;
            case 6:
            c[6]++;
            break;
            case 7:
            c[7]++;
            break;
            case 8:
            c[8]++;
            break;
            case 9:
            c[9]++;
            break;
            default:
            continue;
        }
    }
        for(int i=0;i<=9;i++)
        {
            cout<<i<<" "<<c[i]<<endl;
        }
        return 0;
}
