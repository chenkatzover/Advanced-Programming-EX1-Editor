#include "Document.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>


using namespace std;

    void Document ::  runA(){//add lines after
     for (string line; getline(cin, line);){
        if (!line.empty()){
            if (line == "."){
                return;}
            fileContents.emplace(fileContents.begin()+row+1,line);
            row++;
        }
    }
    }
    
    void Document ::  runI(){ //add lines before
        for (string line; getline(cin, line);) {
        cout<< line<<endl;
        if (!line.empty()){
            if (line == "."){
                row--;
                return;
            }
            fileContents.emplace(fileContents.begin()+(row),line);
            row++;
        }
    }
    }

    void Document ::  runC(){//replace the row
    fileContents.erase(fileContents.begin() + row);
    for (string line;getline(cin, line);){
        if (!line.empty()){
            if (line == ".")
                return;
            fileContents.emplace(fileContents.begin()+row,line);
            row++;
        }
    }
    }

    void Document ::  runD(){
          auto it = fileContents.begin();
          fileContents.erase(it+row);
    }

    void Document ::  runSlash(){//search for specific work
    string line;
    getline(cin, line);

    if (!line.empty()){
        line = line.substr(0, line.size()- 1);
        size_t f = fileContents.at(row+1).find(line);
        if(f = string::npos){
            int x = -1;
            while (f==string::npos) {
                x=x+1;
                f = fileContents.at(x).find(line);
            }
            row=x;
        }
        else {row++;}
    }
    }
    void Document ::  runJ(){//merge between lines
         fileContents.at(row+1) += fileContents.at(row + 2);
         fileContents.erase(fileContents.begin() + (row + 2));
    }

    void Document ::  runS(){
    string oldWord;
    string newWord;
    string line;
    getline(cin, line);
    line = line.substr(1, line.size() - 2);
    oldWord = line.substr(0, line.find("/"));
    newWord = line.substr(line.find("/")+1, line.size()-1);
    fileContents.at(row).replace(fileContents.at(row).find(oldWord), oldWord.size(), newWord);
    }

    void Document ::  runW(){
    string name;
    getline(cin, name);
    if (!name.empty()){
        name=name.substr(1, name.size()); 
        ofstream outFile(name);
        ostream_iterator<string> output_iterator(outFile,"\n");
        copy(fileContents.begin(), fileContents.end(), output_iterator);
    }
    }
    
    
