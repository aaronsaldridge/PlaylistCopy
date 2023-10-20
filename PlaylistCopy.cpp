#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string fileName;
    ifstream fin;
    fin.open("entire.m3u8"); //replace with name of playlist
    while(!fin.eof())
    {
        getline(fin,fileName);
        if(fileName[0]!='#') //ignore lines starting with # bc they are comments
        {
            system(("cp " + fileName + " /mnt/kazoku/music/ -v").c_str());  //replace with desired output path
        }
    }
    fin.close();
    return 0;
}
