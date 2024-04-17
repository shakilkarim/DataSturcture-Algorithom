#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

struct WordInfo
{
    std::string word;
    int count;

    WordInfo(const std::string &w, int c) : word(w), count(c) {}
};

int main()
{
    int T;
    std::cin >> T;
    std::cin.ignore(); // Ignore the newline after T

    while (T--)
    {
        std::string line;
        std::getline(std::cin, line); // Read the entire line

        std::unordered_map<std::string, int> wordCount;
        std::istringstream iss(line);
        std::string word;

        while (iss >> word)
        {
            wordCount[word]++;
        }

        int maxCount = 0;
        WordInfo mostFrequentWord("", 0);

        for (const auto &entry : wordCount)
        {
            if (entry.second > maxCount)
            {
                mostFrequentWord = WordInfo(entry.first, entry.second);
                maxCount = entry.second;
            }
            else if (entry.second == maxCount && entry.first < mostFrequentWord.word)
            {
                mostFrequentWord = WordInfo(entry.first, entry.second);
            }
        }

        std::cout << mostFrequentWord.word << " " << mostFrequentWord.count << std::endl;
    }

    return 0;
}
