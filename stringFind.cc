#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string strDot = "hi, didn't you find Mr Brbroun,";
    if(strDot.find_first_of(',') == strDot.find_last_of(','))
    {
        cout<<"just one dot at "<<strDot.find_first_of(',')<<endl;

    }
    else
    {
        cout<<"firts and last dot at "<<strDot.find_first_of(',')<<", "
            << strDot.find_last_of(',')<<endl;
    }

    return 0;
}