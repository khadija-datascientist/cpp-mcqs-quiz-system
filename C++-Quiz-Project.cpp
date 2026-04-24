#include <iostream>
using namespace std;

//Function
void startQuiz() {
    string name;
    int score = 0;
    int userAnswer;
    int totalQuestions = 10;

    //questions
    string questions[10] = {
        "What is the capital of Pakistan?",
        "5 + 3 = ?",
        "C++ is a?",
        "Which one is input function?",
        "Which symbol is used for comments in C++?",
        "10 / 2 = ?",
        "Which keyword is used for decision making?",
        "Which loop runs at least once?",
        "Which symbol is used for output in C++?",
        "Which data type is used for decimal values?"
    };
    
    //options
    string options[10][4] = {
        {"Lahore", "Islamabad", "Karachi" , "Faisalabad"},
        {"8", "6", "7" , "9"},
        {"Machine language", "Assembly language", "High-level Language", "Low-level language"},
        {"cout", "cin", "printf", "scan"},
        {"//", "##", "**", "--"},
        {"10", "8", "2", "5"},
        {"loop", "if", "switch", "break"},
        {"for", "while", "do-while", "nested loop"},
        {"cin", "cout", "input", "printf"},
        {"int", "bool", "char", "float"}
    };
    
     //answers
    int answers[10] = {2, 1, 3, 2, 1, 4, 2, 3, 2, 4}; 

    
    cout << "\nEnter your name: ";
    cin >> name;
    cout << "\nWelcome " << name << "! Let's start the quiz.\n";

    
    for (int i = 0; i < totalQuestions; i++) {
        cout << "\nQ" << i+1 << ": " << questions[i] << endl;
        cout << "1. " << options[i][0] << "\n2. " << options[i][1] << "\n3. " << options[i][2] << "\n4. " << options[i][3] << endl;
        cout << "Enter your answer: ";
        cin >> userAnswer;
   
   //check answer
        if (userAnswer == answers[i]) {
            cout << "\nCORRECT!" << endl;
            score += 1.0;
        } else {
            cout << "\nWRONG!" << endl;
            score -= 0.5;
        }
	}   

    //Result
    cout << "\n----- RESULT -----\n";
    cout << "Name: " << name << endl;
    cout << "Score: " << score << " / " << totalQuestions << endl;

    float percentage = (float)score / totalQuestions * 100;
    cout << "Percentage: " << percentage << "%\n";


    //Grading
    if (percentage >= 80)
        cout << "Grade: A\nExcellent!\n";
    else if (percentage >= 60)
        cout << "Grade: B\nGood Job!\n";
    else if (percentage >= 40)
        cout << "Grade: C\nAverage Performance\n";
    else
        cout << "Grade: F\nBetter Luck Next Time\n";

    cout << "\nThank you for attempting the quiz!\n";
}

int main() {
    int choice;

    cout << "-------------------------- QUIZ MANAGEMENT SYSTEM ----------------------------\n";
    cout << "\nNote: Negative marking is applied. Each incorrect answer will deduct 0.5 marks." << endl;
    cout << "\n1. Start Quiz\n";
    cout << "2. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        startQuiz(); 
    } else {
        cout << "Program Ended.\n";
    }

    return 0;
}
