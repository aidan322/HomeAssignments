#include <iostream>
#include <sstream>
#include <string>

bool isOperator(const std::string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

double applyOperator(const std::string& op, double a, double b) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    return a / b;
}

int main() {
    std::string input;
    std::getline(std::cin, input);  // читаем всю строку

    std::istringstream stream(input);
    double* stack = new double[100];  // стек на куче
    double* top = stack - 1;          // указатель на вершину

    std::string token;
    while (stream >> token) {
        if (!isOperator(token)) {
            double num = std::stod(token);
            *(++top) = num;
        } else {
            double right = *(top--);
            double left = *(top--);
            *(++top) = applyOperator(token, left, right);
        }
    }

    std::cout << "RESULT: " << *top << std::endl;

    delete[] stack;
    return 0;
}
