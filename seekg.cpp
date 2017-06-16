#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream is("seekg.txt",ifstream::binary);
    if(is)
    {
        //get length of file 
        is.seekg(0,is.end);
        int length = is.tellg();

        is.seekp(length*2);
        //is<<"I writed\n";

        is.seekg(0,is.beg);

        // allcate memory
        char *buffer = new char[length];

        // read data as a block
        is.read(buffer, length);

        is.close();

        // print content
        cout.write(buffer, length);

        delete[] buffer;
    }
    return 0;
}