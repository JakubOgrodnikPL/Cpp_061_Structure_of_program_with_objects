#include <iostream>

using namespace std;

class Question
{
public:
    string content;
    string a,b,c,d;
    int q_number;
    string right;
    string answer;
    int points; // 0 or 1 ; do not initialize value

    void read(); //Read content of the question
    void show(); // Show question
    void check(); // Check answer

};
