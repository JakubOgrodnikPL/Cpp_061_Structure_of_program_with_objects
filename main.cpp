#include <iostream>
#include "question.h"

using namespace std;

int main()
{
    Question q[5];
    int sum=0;
    for(int i=0; i<=4; i++)
    {
    q[i].q_number=i+1;
    q[i].read();
    q[i].show();
    q[i].check();
    sum+=q[i].points;
    }

    cout<<"End of quiz. Points = "<<sum;
    return 0;
}
