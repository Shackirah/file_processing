#include <iostream>
#include <fstream>

using namespace std;
string createFile ();
string readFile ();
string writeFile ();


int main()
{
    int option;
        cout <<"Choose option\n" 
             <<"1. Write to a file\n" 
             <<"2. Read from a file\n"
             <<"3. Create a file\n" 
             <<"4. Exit"<<endl;
        cin >>option;
        switch (option)
        {
        case 1:
             writeFile();
             break;
        case 2:
             readFile();
             break;
        case 3:
             createFile();
             break;
        case 4:
            break;
        default:
            cout <<"Oooops!!!!!!!!!! invalid input"<<endl;
        }
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
string readFile ()
{
     string fileName;
    ifstream myFile("text.txt");
    if (myFile.is_open()) {
        string content;
        while (getline(myFile, content)) {
            fileName += content + "\n";
        }
        myFile.close();
        cout << "Content read from file:" << endl;
        cout << fileName;
    } else {
        cerr << "Error opening file for reading." << endl;
    }
    return fileName;
} 
string writeFile ()
{
    string sentence;
    cout << "Enter what to write to the file:" << endl;
    //cin.ignore():clear the newline character left in the buffer by previous cin.
    cin.ignore();
    getline(cin, sentence);
    ofstream myFile("text.txt");
    if (myFile.is_open()) {
        myFile << sentence;
        myFile.close();
        cout << "Content written to file successfully." << endl;
    } else {
        cerr << "Error opening file for writing." << endl;
    }
    return sentence;
}
