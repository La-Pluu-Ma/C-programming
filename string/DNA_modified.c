#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<cs50.c>

void replace_virus(string, string, string, string);

void print_array(string);

bool check_word(string);

bool find_virus(string, string);

int main(void)
{
    string DNA, virus, health;
    char Finish[50];
    do
    {
        DNA = get_string("", "Enter DNA : ");
        check_word(DNA);
    }while(check_word(DNA) != true);

    do
    {
        virus = get_string("", "Enter virus : ");
        check_word(virus);
    }while(check_word(virus) != true);

    do
    {
        health = get_string("", "Enter health code : ");
        check_word(health);
    }while(check_word(health) != true);


    if(find_virus(DNA, virus) == true)
    {
        printf("Virus found in DNA.\n");
        replace_virus(DNA, virus, health, Finish);
        print_array(Finish);
    }
    else
    {
        printf("Congrats! Virus not found.\n");
    }
    return 0;
}

bool find_virus(string DNA, string virus)
{
    int length_D = strlen(DNA);
    int length_V = strlen(virus);
    int counter;
    for (int i = 0; i < length_D - length_V; i++)
    {
        counter = 0;
        for (int j = 0; j < length_V; j++)
        {
            if (DNA[i + j] == virus[j])
            {
                counter++;
            }
        }
        if (counter == length_V)
        {
            return true;
        }
    }
    return false;
}
 bool check_word(string arr)
 {
     int s = strlen(arr);
     int counter = 0;
     for(int i = 0; i < s; i++)
     {
         if(arr[i] == 'A' || arr[i] == 'T' || arr[i] == 'G' || arr[i] == 'C')
            counter++;
     }
     if(counter == s)
        return true;
     else
        return false;
 }

 void replace_virus(string DNA, string virus, string health, char Finish[50])
 {
    int length_D = strlen(DNA);
    int length_V = strlen(virus);
    int length_H = strlen(health);
    int counter, index = 0;
    for (int i = 0; i < length_D - length_V; i++)
    {
        counter = 0;
        for (int j = 0; j < length_V; j++)
        {
            if (DNA[i + j] == virus[j])
            {
                counter++;
            }
        }
        if(counter == length_V)
        {
            for(int k = 0; k < length_H; k++)
            {
                Finish[index] = health[k];
                index++;
            }
        }
        else
        {
            Finish[index] = DNA[i];
            index++;
        }
    }
    Finish[index] = '/0';
 }

 void print_array(string arr)
 {
     int l = strlen(arr);
     for(int i = 0; i < l; i++)
     {
         printf("%c", arr[i]);
     }
     printf("\n");
 }
