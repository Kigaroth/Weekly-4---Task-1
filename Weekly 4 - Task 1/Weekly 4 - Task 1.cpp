// Weekly 4 - Task 1.cpp //

#include <iostream>
#include <string>

std::string sentence;

// Task 1 - Functions

void input_sentence() {

    std::cout << "Please type a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << std::endl;

}

void capitalize_sentence() {

    std::cout << "\n The all capitalized version of ''" << sentence << "'' is:\n ";

    for (int i = 0; i < sentence.length(); i++) {
        putchar(toupper(sentence[i]));
    }
    std::cout << std::endl;
}

int main()
{
    std::cout << " \t Weekly 4 - Task 1 \n\n ";

    input_sentence();
    capitalize_sentence();

    std::cout << " Thank you for using this program! ";

    return 0;

}

