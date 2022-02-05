#include <stdio.h>
#include <cs50.c>
#include <string.h>

int search_pattern(string, string);
int main(void)
{
    string sentence = get_string("", "Enter the sentence : ");

    string word = get_string("", "Enter the word : ");

    int num;

    num = search_pattern(sentence, word);

    printf("%d words found in the sentence!\n", num);

}

int search_pattern(string sentence, string word)
{
    int length_s = strlen(sentence);
    int length_w = strlen(word);
    int counter;
    int count_num = 0;
    for (int i = 0; i < length_s - length_w; i++)
    {
        counter = 0;
        for (int j = 0; j < length_w; j++)
        {
            if (sentence[i + j] == word[j])
            {
                counter++;
            }
        }
        if (counter == length_w)
        {
            count_num++;
        }
    }
    return count_num;
}
