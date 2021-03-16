#include "Editor.h"
#include <fstream>
#include <vector>
#include <iostream>

int main() {

 vector<string> fileContents;
 ifstream MyReadFile("months.txt");
 if (!MyReadFile.is_open()) return 0;
 string word;
while(getline(MyReadFile, word)){
		fileContents.push_back(word);
	}
for (int i = 0; i < fileContents.size(); i++)
    {
        cout << fileContents[i] << endl;
    }  
 return 0;
}