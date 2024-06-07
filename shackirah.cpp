#include <iostream>
#include <fstream>

using namespace std;
string createFile ();
void readFile ();
void writeFile ();


int main()
{
    int option;
   // while(1)
    //{
       
        cout <<"Choose option\n" <<"1. Write to a file\n" <<"2. Read from a file\n"
             <<"3. Create a file\n" <<"4. Exit"<<endl;
        cin  >>option;
        switch (option)
        {
         case 1:
             //writeFile();
             break;
        case 2:
             //readFile();
             break;
        case 3:
             createFile();
             break;
        //case 4:
            // break;
        default:
            cout <<"Oooops!!!!!!!!!! invalid input"<<endl;
        }
   // }
    

//return 0;
}
string createFile ()
{
    string fileName;
    string extention =".txt";
    cout <<"Enter a file name to be created"<<endl;
    cin >> fileName;
    fileName = fileName + extention;
    ofstream myFile(fileName);
    return fileName;
}
void readFile ()
{
} 
void writeFile ()
{
    ofstream myFile("I love my mom");
}
