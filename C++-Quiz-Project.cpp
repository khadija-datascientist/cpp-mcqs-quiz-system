#include <iostream>
#include <string>

using namespace std;

class QuizSystem {
private:
    string name;
    float score;
    int totalQuestions;

    // Quiz Data
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

    string options[10][4] = {
        {"Lahore", "Islamabad", "Karachi", "Faisalabad"},
        {"8", "6", "7", "9"},
        {"Machine language", "Assembly language", "High-level Language", "Low-level language"},
        {"cout", "cin", "printf", "scan"},
        {"//", "##", "**", "--"},
        {"10", "8", "2", "5"},
        {"loop", "if", "switch", "break"},
        {"for", "while", "do-while", "nested loop"},
        {"cin", "cout", "input", "printf"},
        {"int", "bool", "char", "float"}
    };

    int answers[10] = {2, 1, 3, 2, 1, 4, 2, 3, 2, 4};

public:
    //Constructor
    QuizSystem() : score(0), totalQuestions(10) {}

    void conductQuiz() {
        cout << "\nEnter your name: ";
        cin >> name;
        cout << "\nWelcome " << name << "! Let's start the quiz.\n";

        for (int i = 0; i < totalQuestions; i++) {
            cout <<"\nQ" << i + 1 << ": "<< questions[i] << endl;
            for (int j = 0;j < 4; j++) {
                cout << j + 1 << ". " << options[i][j] << endl;
            }
            
            int userAnswer;
            cout << "\nEnter your answer (1-4): ";
            cin >> userAnswer;

            if (userAnswer == answers[i]) {
                cout << "CORRECT!" << endl;
                score += 1.0;
            } else {
                cout << "WRONG!" << endl;
                score -= 0.5;
            }
        }
        displayResult();
    }

    void displayResult() {
        cout << "\n----- RESULT -----\n";
        cout << "Name: " << name << endl;
        cout << "Score: " << score << " / " << totalQuestions << endl;

        float percentage = (score / totalQuestions) * 100;

        if (percentage >= 80) cout << "Grade: A (Excellent!)\n";
        else if (percentage >= 60) cout << "Grade: B\n";
        else if (percentage >= 40) cout << "Grade: C\n";
        else cout << "Grade: F (Better Luck Next Time)\n";

        cout << "\nThank you for attempting the quiz!\n";
    }
};

int main() {
    int choice;
    cout << "-------------------------- QUIZ MANAGEMENT SYSTEM ----------------------------\n";
    cout << "\nNote: Negative marking is applied. Each incorrect answer will deduct 0.5 marks." << endl;
    cout << "\n1. Start Quiz\n2. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        QuizSystem myQuiz; //object of class
        myQuiz.conductQuiz();
    } else {
        cout << "Program Ended.\n";
    }

    return 0;
}
