#include <iostream>
#include <random>
#include <string>

int main(int argc, char **argv) {
    int length = argc > 1 ? std::stoi(argv[1]) : 20;
    if (length < 8 || length > 256) { std::cerr << "La longitud debe estar entre 8 y 256\n"; return 1; }
    const std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    std::random_device random; std::uniform_int_distribution<size_t> pick(0, chars.size() - 1);
    for (int i = 0; i < length; ++i) std::cout << chars[pick(random)];
    std::cout << '\n';
}
