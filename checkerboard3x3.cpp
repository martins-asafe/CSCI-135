//Name: Matthew Awad
//Date: Feb 17, 2022
//Email: Matthew.Awad62@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main()
{
    int width  = 0;
    int height = 0;
    cout << "Input width: ";
    cin  >> width;
    cout << endl;

    cout << "Input height: ";
    cin  >> height;
    cout << endl;

    cout << "Shape:" << endl;
    //Prints rows and columns 
    for(int row = 0; row < height; row++)
    {
        for(int col = 0; col < width; col++)
        {
            if(row/3 % 2 == 0)
            {
                if(col/3 % 2 == 0)
                {
                    cout << "";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if(col/3 % 2 != 0)
                {
                    cout << "";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}