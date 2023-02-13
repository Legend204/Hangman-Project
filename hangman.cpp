#include <iostream>
#include <fstream>
using namespace std;

/*
boolean returning function with an integer parameter that takes in the amount of wrong answers by the user,
returns the part of the Hangman by comparing the number of wrong answers by using 
if else statements to compare amount of wrong answers and 
print out the Hangman using string datatype
*/
bool is_hung(int num_wrong)  {
    if (num_wrong == 1)
    {
        cout << "\t \t \t"
             << " O " << endl;
    }
    else if (num_wrong == 2)
    {
        cout << "\t \t \t"
             << " O " << endl;
        cout << "\t \t \t"
             << "/" << endl;
    }
    else if (num_wrong == 3)
    {
        cout << "\t \t \t"
             << " O " << endl;
        cout << "\t \t \t"
             << "/ \\" << endl;
    }
    else if (num_wrong == 4)
    {
        cout << "\t \t \t"
             << " O " << endl;
        cout << "\t \t \t"
             << "/|\\" << endl;
    }
    else if (num_wrong == 5)
    {
        cout << "\t \t \t"
             << " O " << endl;
        cout << "\t \t \t"
             << "/|\\" << endl;
        cout << "\t \t \t"
             << " | " << endl;
    }
    else if (num_wrong == 6)
    {
        cout << "\t \t \t"
             << " O " << endl;
        cout << "\t \t \t"
             << "/|\\" << endl;
        cout << "\t \t \t"
             << " | " << endl;
        cout << "\t \t \t"
             << "/ " << endl;
    }
    else if (num_wrong == 7)
    {
        cout << "\t \t \t"
             << " O " << endl;
        cout << "\t \t \t"
             << "/|\\" << endl;
        cout << "\t \t \t"
             << " | " << endl;
        cout << "\t \t \t"
             << "/ \\" << endl;
        cout << " YOU ARE HUNG" << endl;
        return false; //
    }

    return true;
}

int main()
{
     //file objects to open and read from the file
    ifstream reader;
    reader.open("infile.txt");

     //variables to store different datatypes that would be read from the file
    string question;
    string ans1;
    string ans2;
    string ans3;
    string ans4;
    string actual_answer;
    bool is_correct;
    char user_input;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    int count = 0;
    int incorrect_count = 0;

     //while loop to read questions and answers from the file 
    while (count < 16)
    {
        getline(reader, question);
        getline(reader, ans1);
        getline(reader, ans2);
        getline(reader, ans3);
        getline(reader, ans4);
        getline(reader, actual_answer);

        cout << question << endl;
        cout << ans1 << endl;
        cout << ans2 << endl;
        cout << ans3 << endl;
        cout << ans4 << endl;

        cin >> user_input;

     /*
      if else statements to check if the user's answer input tallies with the correct answer index in the file 
     */
        if (toupper(user_input) != actual_answer[16]) // toupper converts user input to uppercase  
        {
            cout << "incorrect" << endl;
            incorrect_count++;

            if (!is_hung(incorrect_count)) //if the function returns false(total number of wrong answers equals 7, break the loop
            {
                break;
            }
        }
        count++; //increment count 
    }

    return 0;
}
