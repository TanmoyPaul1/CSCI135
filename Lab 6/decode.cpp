#include <iostream>
#include <cmath>
#include "decode.h"
#include "decrypt.h"
#include "caesar.h"
#include <vector>
#include <algorithm>

std::string decodeCaesar(std::string encryptedString)
{
    double alphabetFreq[] = {8.2, 1.5, 2.8, 4.3, 13, 2.2, 
        2.0, 6.1, 7.0, 0.15, 0.77, 4.0, 2.4, 6.7, 7.5, 1.9, 
        0.095, 6.0, 6.3, 9.1, 2.8, 0.98, 2.4, 0.15, 2.0, 0.074};
    double distance[26] = {0};
    std::string tests[26];
    double sum = 0;

    // count array for how many times each letter comes up in the input
    int count[26] = {0};
    // the frequency for each possible shift
    std::vector<double> freqs = {};

    for (int i = 0; i < encryptedString.length(); i++)
    {
        if (isalpha(encryptedString[i]))
        {
            encryptedString[i] = tolower(encryptedString[i]);
            count[encryptedString[i] - 'a']++;
        }
    }

    // frequency array of each letter in the input
    for (int i = 0; i < 25; i++)
    {
        // inputs the calculated frequency of each letter into its index
        double length = encryptedString.length();
        freqs.push_back((count[i]/length * 100));
    }

    for (int i = 0; i < 25; i++)
    {
        // the decrypted string for each index
        tests[i] = decryptCaesar(encryptedString, i);
        // rotates the frequencies
        std::rotate(freqs.begin(), freqs.end() - i, freqs.end());
        for (int j = 0; j < 25; j++)
        {
            // adds all the frequencies in the current frequency rotation
            sum += pow(alphabetFreq[j] - freqs[j], 2);
        }
        distance[i] = sqrt(sum);
        // std::cout << distance[i] << std::endl;
        sum = 0;
    }
    int smallestIndex = 0;
    for (int i = 0; i < 25; i++)
    {
        if (distance[i] < distance[smallestIndex])
        {
            smallestIndex = i;
        }
    }
    return tests[smallestIndex];
}