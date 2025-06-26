#include <iostream>
#include <vector>
#include <string>
#include <cctype> // for tolower()

using namespace std;

int main() {
    vector<string> questions = {
        "1. Is the earth flat?",
        "2. What is the capital of France?",
        "3. Is the sky blue?",
        "4. Is 2 + 2 = 4?"
    };

    vector<vector<string>> answers = {
        {"a. Yes", "b. No", "c. Maybe", "d. I don't know"},
        {"a. Paris", "b. London", "c. Berlin", "d. Madrid"},
        {"a. Yes", "b. No", "c. Sometimes", "d. I don't know"},
        {"a. Yes", "b. No", "c. Maybe", "d. I don't know"}
    };
    

    vector<char> answerKey = {'b', 'a', 'a', 'a'};

    char guess;
    int score = 0;

    for (size_t i = 0; i < questions.size(); i++) {
        cout << "****************************************\n";
        cout << questions[i] << '\n';
        cout << "****************************************\n";

        for (size_t j = 0; j < answers[i].size(); j++) {
            cout << answers[i][j] << '\n';
        }

        cout << "Your answer: ";
        cin >> guess;
        guess = tolower(guess); // accept both uppercase/lowercase

        if (guess == answerKey[i]) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer: " << answerKey[i] << '\n';
        }

        cout << '\n';
    }

    cout << "You got " << score << " out of " << questions.size() << " correct!\n";

    return 0;
}
