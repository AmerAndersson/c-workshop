#include <iostream>
#include <stack>
#include <string>

/**
 * This program defines a function areBracketsBalanced that checks whether the brackets
 * in the given expression are balanced. It uses a stack to keep track of opening brackets
 * and verifies if each closing bracket matches the corresponding opening bracket.
 * If the stack is empty at the end, the expression is balanced; otherwise, it’s not.
 */

bool areBracketsBalanced(std::string expr);

int main() {
  std::string expr = "[{()}]";
  if (areBracketsBalanced(expr)) {
    std::cout << "Balanced";
  } else {
    std::cout << "Not Balanced";
  }
  std::cout << "\n";
  return 0;
}

bool areBracketsBalanced(std::string expr) {
  std::stack<char> temp;
  for (int i = 0; i < expr.length(); ++i) {
    if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
      temp.push(expr[i]);
    } else if ((temp.top() == '(' && expr[i] == ')') ||
               (temp.top() == '{' && expr[i] == '}') ||
               (temp.top() == '[' && expr[i] == ']')) {
      temp.pop();
    } else {
      temp.push(expr[i]);
    }
  }
  return temp.empty();
}