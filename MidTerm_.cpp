#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    // Setter Function
    void setValues(string, string,
        string, string,
        string, int, int);

    // Function to ask questions
    void askQuestion();
};

// Driver code
int main()
{
    cout << "\n\n\t\t\t\tVideo game quiz game by Ashton (with help from people online)"
        << endl;
    cout << "\nPress Enter to start "
        << "the quiz... " << endl;

    // Input
    cin.get();

    string Name;
    int Age;

    // Input the details
    cout << "What is your name?"
        << endl;
    cin >> Name;
    cout << endl;

    cout << "How old are you?"
        << endl;
    cin >> Age;
    cout << endl;

    string Respond;
    cout << "Are you ready to take"
        << " the quiz " << Name
        << "? yes/no" << endl;
    cin >> Respond;

    if (Respond == "yes" || "Yes" || "y" || "Y") {
        cout << endl;
        cout << "Good Luck!" << endl;
    }
    else {
        cout << "Okay Good Bye!" << endl;
        return 0;
    }

    // Objects of Question Class
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;

    // correct answer
    q1.setValues("Question 1: What Super hero game about two arachnid people comes/came out recently: ", "SpiderMan 2",
        "SpiderMan 1", "Batman arkham knight",
        "SuperMan", 1, 10);
    q2.setValues("Question 2: If what is the name of the sequel of the game God of War (2019): ", "God of War 2",
        "God of War 6", "God of War Ragnorock",
        "God of Boy", 3, 10);
    q3.setValues("Question 3: What game Console is the Call of Duty franchise on", "Xbox",
        "PlayStation", "PC",
        "All of the above", 4, 10);
    q4.setValues("Question 4: What is the last Halo game developed by Bungie Studios", "Halo 2",
        "Halo 3", "Halo:Reach",
        "Halo 4 Guardians", 3, 10);
    q5.setValues("Question 5: What was one of the main features of the game Portal 2", "story",
        "Coop", "Puzzles",
        "Magic", 2, 10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();

    // Display the total score
    cout << "Total Score = " << Total
        << " out of 50" << endl;

    // Display the results

    // If the player pass the quiz
    if (Total >= 30) {
        cout << "Congrats you passed the"
            << " quiz!" << endl;
    }

    // Otherwise
    else {
        cout << "Alas! You failed the quiz."
            << endl;
        cout << "Better luck next time."
            << endl;
    }
    return 0;
}

// Function to set the values of
// the questions
void Question::setValues(
    string q, string a1,
    string a2, string a3,
    string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
    cout << endl;

    // Print the questions
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;

    // Display the answer
    cout << "What is your answer?(in number)"
        << endl;
    cin >> Guess;

    // If the answer is correct
    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct !" << endl;

        // Update the correct score
        Total = Total + Question_Score;
        cout << "Score = " << Question_Score
            << " out of "
            << Question_Score
            << "!" << endl;
        cout << endl;
    }

    // Otherwise
    else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = 0"
            << " out of "
            << Question_Score
            << "!" << endl;
        cout << "Correct answer = "
            << Correct_Answer
            << "." << endl;
        cout << endl;
    }
}