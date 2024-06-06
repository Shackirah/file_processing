#include <iostream>
#include <fstream>
using namespace std;
void createFile ();
void readFile ();
void writeFile ();


int main()
{
    //cout << "hello world";
    int option;
    while(1)
    {
       
        cout <<"Choose option\n" <<"1. Write to a file\n" <<"2. Read from a file\n"
             <<"3. Create a file\n" <<"4. Exit"<<endl;
        cin  >>option;
        /* switch (option)
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
        }*/
    }
    

return 0;
}
void createFile ()
{
    ofstream myFile("text.txt");

}
void readFile ()
{
} 
void writeFile ()
{
    ofstream myFile("I love my mom");
}
