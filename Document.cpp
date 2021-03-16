#include "Document.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

    void Document ::  runA(){//add lines after
     for (string line; getline(std::cin, line);)
    {
        if (!line.empty())
        {
            if (line == ".")
                return;
            fileContents.emplace(fileContents.begin() + (row + 1), line);
            row++;
        }
    }

    }
    void Document ::  runDot(){

    }
    void Document ::  runI(){

    }
    void Document ::  runC(){

    }
    void Document ::  runD(){

    }
    void Document ::  runSlash(){

    }
    void Document ::  runJ(){

    }
    void Document ::  runS(){

    }
    void Document ::  runW(){

    }
    void Document ::  runQ(){

    }
    void Document ::  runNum(){

    }
    
