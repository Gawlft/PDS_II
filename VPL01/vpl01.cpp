#include <iostream>
#include <string>

void vowelCounter(std::string word)
{   
    int aCounter = 0;
    int ACounter = 0;
    int eCounter = 0;
    int ECounter = 0;
    int iCounter = 0;
    int ICounter = 0;
    int oCounter = 0;
    int OCounter = 0;
    int uCounter = 0;
    int UCounter = 0;

    int wordLenght = word.size();
    for (int i = 0; i < wordLenght; i++)
    {   
        char vowel = word[i];
        switch (vowel)
        {
        case 'a':
            aCounter++;
            break;
        case 'A':
            ACounter++;
            break;
        case 'e':
            eCounter++;
            break;
        case 'E':
            ECounter++;
            break;
        case 'i':
            iCounter++;
            break;
        case 'I':
            ICounter++;
            break;
        case 'o':
            oCounter++;
            break;
        case 'O':
            OCounter++;
            break;
        case 'u':
            uCounter++;
            break;
        case 'U':
            UCounter++;
            break;
        default:
            break;
        }
    }
    if (aCounter != 0)
    {
        std::cout << "a " << aCounter << std::endl;
    }
    if(eCounter != 0)
    {
        std::cout << "e " << eCounter << std::endl;
    }
    
    if(iCounter != 0)
    {
        std::cout << "i " << iCounter << std::endl;
    }
    if(oCounter != 0)
    {
        std::cout << "o " << oCounter << std::endl;
    }
    if (uCounter != 0)
    {
        std::cout << "u " << uCounter << std::endl;
    }
};

int main()
{
    std::string word;
    std::cin >> word;
    vowelCounter(word);

};