#include "Editor.h"
#include "Document.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(int argc, char* argv[]) {

if(argc == 1){
    Editor editor;
    editor.loop();
}
else{
    Editor editor(argv[1]);
    editor.loop();
}

return 0;
}
