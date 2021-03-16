#include "Editor.h"
#include "Document.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

 Editor::Editor(){}//empty constructor

Editor::Editor(string Filename){  //constructor that gets the file name

 ifstream MyReadFile("Filename");
 if (!MyReadFile.is_open()){ cout << "Unable to open file"; }

string line;
while(getline(MyReadFile, line)){
  if(!line.empty()){
		doc.fileContents.push_back(line);
  }
	}
  MyReadFile.close();
}

void Editor::loop() {

 bool flag=true;
 char c;
 while(flag){
  cin >> c; // Get user input from the keyboard
  switch(c){

 case '3':
    doc.row=3;
    break;

  case '+':
    int num=getchar();
    doc.row+=num;
    break;

  case '-':
    int num=getchar();
    doc.row-=num;
    break;

  case '$':
     doc.row=doc.fileContents.size()-1;
    break;

  case 'a':
     doc.runA();
    break;

  case '.':
     doc.runDot();
    break;

  case 'i':
     doc.runI();
    break;

  case 'c':
     doc.runC();
    break;
  case 'd':
     doc.runD();
    break;
    
  case '/':
     doc.runSlash();
    break;

  case 's':
     doc.runS();
    break;
  case 'j':
     doc.runJ();
    break;
  case 'w':
     doc.runW();
    break;
  case 'q':
     flag=false;
    break;
default:
   cout<<"?"<<endl;
}
 }