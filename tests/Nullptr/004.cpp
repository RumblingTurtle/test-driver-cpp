#include <cstddef>

void f(int *i) {}
void f(double *i) {}
void f(std::nullptr_t i) {}

// Ambiguous call resolved
int main() {
  f(nullptr);
}