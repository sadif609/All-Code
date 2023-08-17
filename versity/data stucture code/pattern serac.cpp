#include <iostream>
using namespace std;
int i,j, Count=0;
int main()
{
    string input_text, search_pattern;
    cout<<"Enter the inputed text: ";
    getline(cin,input_text);
    cout<<"Enter the pattern: ";
    getline(cin,search_pattern);


    int textSize = input_text.length();
    int patternSize = search_pattern.length();

    for(i=0; i<textSize; i++)
    {
        for(j=0; j<patternSize; j++)
        {
            if(input_text[i+j]!=search_pattern[j])
                break;
        }
        if(patternSize==j)
        {
            Count++;
            cout<<"Pattern found in location: "<<i<<endl;
        }
    }
    if(Count==0)
        cout<<"Pattern NOT FOUND!!"<<endl;
    else
        cout<<"Number of Occurrences "<<Count<< " times"<<endl;
}
