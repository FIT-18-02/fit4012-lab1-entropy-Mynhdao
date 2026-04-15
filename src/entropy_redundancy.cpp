#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = static_cast<double>(pair.second) / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) {
        return 0.0;
    }
    
    // Entropy thực tế H(X)
    double h_x = calculate_entropy(text);
    
    // Entropy cực đại H_max = log2(N)
    double h_max = log2(static_cast<double>(alphabet_size));
    
    // Redundancy = H_max - H(X)
    double redundancy = h_max - h_x;
    
    return (redundancy < 0) ? 0 : redundancy; // Đảm bảo không âm do sai số làm tròn
}

int main() {
    string input;
    cout << "Enter a string of characters: ";
    getline(cin, input);

    double entropy = calculate_entropy(input);
    double redundancy = calculate_redundancy(input);

    cout << "Entropy: " << entropy << '\n';
    cout << "Redundancy: " << redundancy << '\n';
    return 0;
}
