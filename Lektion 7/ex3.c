#include <stdlib.h>
#include <stdio.h>

void print_word(char *word);
char *move_to_next_word(char *word_ptr);

int main(void)
{
    char sentence[] = "This is\n a sentence with some words in it!";

    char *next_word = sentence;
    printf("The address for next_word point to %p\n", (void *)next_word);
    print_word(next_word);
    next_word = move_to_next_word(next_word);
    printf("The address for next_word point to %p\n", (void *)next_word);
    print_word(next_word);
    next_word = move_to_next_word(next_word);
    printf("The address for next_word point to %p\n", (void *)next_word);
    print_word(next_word);
    next_word = move_to_next_word(next_word);
    printf("The address for next_word point to %p\n", (void *)next_word);
    print_word(next_word);



    return 0;
}

void print_word(char *word)
{
    if(word == NULL)
    {
        return;
    }

    if(*word == '\0')
    {
        return;
    }

    while(*word != ' ' && *word != '\n' && *word != '\0')
    {
        printf("%c", *word);
        word = (word + 1);
    }
    printf("\n");
    return;

}

char *move_to_next_word(char *word_ptr)
{
    if(word_ptr == NULL)
    {
        return word_ptr;
    }

    if(*word_ptr == '\0')
    {
        return word_ptr;
    }


    while(*word_ptr != ' ' && *word_ptr != '\n' && *word_ptr != '\0')
    {
        // printf("%c", *word_ptr);
        word_ptr = (word_ptr + 1);
    }

    if(*word_ptr == '\0')
    {
        return (word_ptr);
    } 

    while(*word_ptr == ' ' || *word_ptr == '\n')
    {
        // printf("%c", *word_ptr);
        word_ptr = (word_ptr + 1);
    }

    return word_ptr;

}