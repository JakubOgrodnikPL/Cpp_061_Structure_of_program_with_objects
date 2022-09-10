#include <iostream>
#include "question.h"
#include <fstream>
#include <cstdlib>
using namespace std;

void Question::read()
{
    fstream file;
    file.open("quiz.txt", ios::in);
    if (file.good()==false)
    {
        cout<<"Could not open file"<<endl;
        exit(0);
    }

    int l_number=(q_number-1)*6+1;
    int current_number=1;
    string line;

    while(getline(file,line))
    {
        if(current_number==l_number) content=line;
        if(current_number==l_number+1) a=line;
        if(current_number==l_number+2) b=line;
        if(current_number==l_number+3) c=line;
        if(current_number==l_number+4) d=line;
        if(current_number==l_number+5) right=line;
        current_number++;
    }

    file.close();
}

void Question::show()
{
    cout<<endl<<content<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl<<"Answer: ";
    cin>>answer;
}

void Question::check()
{
    if(answer==right)
    {
        points=1;
    }
    else points=0;
}

