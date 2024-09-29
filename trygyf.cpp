#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to query and get result
int makeQuery(const string &str)
{
    cout << "? " << str << endl;
    int result;
    cin >> result;
    return result;
}

// Function to update answer based on query results
void updateAnswer(string &opt1, string &opt2, string &ans, int &flag)
{
    if (makeQuery(opt1))
        ans = opt1;
    else if (makeQuery(opt2))
        ans = opt2;
    else
        flag = 1;
}

// New function to prepare and execute a query with options
void handleQuery(string &currentAns, int &reverseFlag)
{
    string opt1 = currentAns + "0";
    string opt2 = currentAns + "1";
    updateAnswer(opt1, opt2, currentAns, reverseFlag);
}

// Main function to handle the guessing process
void processGuesses(string &partialAns, int totalLen)
{
    string currentAns = partialAns;
    int reverseFlag = 0;

    for (int i = 2; i < totalLen; ++i)
    {
        if (!reverseFlag)
        {
            handleQuery(currentAns, reverseFlag);
        }

        if (reverseFlag)
        {
            string revOpt1 = "0" + currentAns;
            string revOpt2 = "1" + currentAns;
            if (makeQuery(revOpt1))
                currentAns = revOpt1;
            else
                currentAns = revOpt2;
        }
    }

    cout << "! " << currentAns << endl;
}

// Driver function
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int len;
        cin >> len;

        if (len == 1)
        {
            if (makeQuery("1"))
                cout << "! 1" << endl;
            else
                cout << "! 0" << endl;
            continue;
        }

        if (makeQuery("00"))
        {
            string start = "00";
            processGuesses(start, len);
        }
        else if (makeQuery("01"))
        {
            string start = "01";
            processGuesses(start, len);
        }
        else if (makeQuery("10"))
        {
            string start = "10";
            processGuesses(start, len);
        }
        else
        {
            string result(len, '1');
            cout << "! " << result << endl;
        }
    }

    return 0;
}
