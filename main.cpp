#include "Editor.h"
#include <fstream>
#include <vector>
#include <iostream>











int main(int argc, char∗ argv[]) {
// switch (argc) {
// case 1:
//  Editor editor;
// break;
// case 2:
// Document document=argv[1];
// break;

// }
//  editor.loop();

    vector<string> fileContents;
    ifstream file;
    file.open(month.txt);
    if (!file.is_open()) return;

    string word;
    while (file >> word)
    {
        fileContents.push_back(word);
    }

    for (int i = 0; i < fileContents.size(); i++)
    {
        cout << fileContents[i] << endl;
    }  




 return 0;
}