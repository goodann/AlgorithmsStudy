
Practice
Compete
Jobs
Rank
Leaderboard

rlawlstjr4876
DashboardAlgorithmsStringsMars Exploration
Your Mars Exploration submission got 15.00 points.    
Try the Next Challenge|Try a Random Challenge
×
Mars Exploration
by Shafaet
Problem
Submissions
Leaderboard
Discussions
Editorial 
Sami's spaceship crashed on Mars! She sends  sequential SOS messages to Earth for help.

NASA_Mars_Rover.jpg

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, , determine how many letters of Sami's SOS have been changed by radiation.

Input Format

There is one line of input: a single string, .

Note: As the original message is just SOS repeated  times, 's length will be a multiple of .

Constraints

 will contain only uppercase English letters.
Output Format

Print the number of letters in Sami's message that were altered by cosmic radiation.

Sample Input 0

SOSSPSSQSSOR
Sample Output 0

3
Sample Input 1

SOSSOT
Sample Output 1

1
Explanation

Sample 0

 = SOSSPSSQSSOR, and signal length . Sami sent  SOS messages (i.e.: ).

Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR

We print the number of changed letters, which is .

Sample 1

 = SOSSOT, and signal length . Sami sent  SOS messages (i.e.: ).

Expected Signal: SOSSOS 
Received Signal: SOSSOT

We print the number of changed letters, which is .

Submissions:35888
Max Score:15
Difficulty: Easy
Rate This Challenge:
More
Current Buffer (saved locally, editable)     
 
C++

 
1
#include <map>
2
#include <set>
3
#include <list>
4
#include <cmath>
5
#include <ctime>
6
#include <deque>
7
#include <queue>
8
#include <stack>
9
#include <string>
10
#include <bitset>
11
#include <cstdio>
12
#include <limits>
13
#include <vector>
14
#include <climits>
15
#include <cstring>
16
#include <cstdlib>
17
#include <fstream>
18
#include <numeric>
19
#include <sstream>
20
#include <iostream>
21
#include <algorithm>
22
#include <unordered_map>
23
​
24
using namespace std;
25
​
26
​
27
int main(){
28
    string S;
29
    cin >> S;
30
    int count=0;
31
    for(int i =0  ; i < S.size()-2;  i+=3 ){
32
        if(S[i] != 'S'){
33
            count++;
34
        }
35
        if(S[i+1] != 'O'){
36
            count++;
37
        }
38
        if(S[i+2] != 'S'){
39
            count++;
40
        }
41
    }
42
    cout <<count;
43
    return 0;
44
}
45
​
Line: 40 Col: 10
Run Code  Submit Code Upload Code as File 
Test against custom input

SOSOOSOSOSOSOSSOSOSOSOSOSOS
Congrats, you solved this challenge!
Test Case #0
Test Case #1
Test Case #2
Test Case #3
Test Case #4
Test Case #5
Test Case #6
Test Case #7
Test Case #8
Test Case #9
Test Case #10
Next ChallengeYou've earned 15.00 points!
Join us on IRC at #hackerrank on freenode for hugs or bugs.
Contest Calendar | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy | Request a Feature
