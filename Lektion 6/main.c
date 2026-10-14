#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool get_user_name(char **new_name);


int main(void)
{   
    // int total_nr_of_students = 0;
    char *student_name = NULL;
    int *student_score = malloc(sizeof(int));
    int capacity = 1;
    // int *students_score = NULL;
    
    printf("Welcome to student grades!\n");
    printf("Enter your name!\n");
    while(!get_user_name(&student_name));

    printf("Hi there %s\n", student_name);

    printf("Start enter grades, stop by enter -1:\n>");

    int user_input;
    int count = 0;

    while (scanf("%d", &user_input) == 1 && user_input != -1) 
    {   
        if (user_input < -1 || user_input > 100)
        {
            printf("Invalid grade, go again! Remember, -1 to signal finish!\n");
            continue;
        }
        if (count == capacity) 
        {
            capacity *= 2;

            int *new_student_score = realloc(student_score, capacity * sizeof(*student_score));

            if (new_student_score == NULL) 
            {
                printf("Minnesallokering misslyckades\n");
                free(student_score);
                return 1;
            }
        student_score = new_student_score;
        }
        student_score[count] = user_input;
        count++;
        printf(">");
    }

    for(int i = 0; i < count; i ++)
    {
        printf("You enter the score %d\n", student_score[i]);
    }

    free(student_score);
    free(student_name);
    return 0;

}

bool get_user_name(char **new_name)
{
    char local_buffer[100] = {0};
    if (fgets(local_buffer, sizeof(local_buffer), stdin) == NULL)
    {
        printf("Error reading input!\n");
        return false;
    }

    // Ta bort newline
    local_buffer[strcspn(local_buffer, "\n")] = '\0';

    int name_len = strlen(local_buffer);

    char *local_new_name = malloc(name_len * sizeof(local_buffer[0]));

    if (local_new_name == NULL)
    {
        printf("Error allocating memory\n");
        return false;
    }

    strcpy(local_new_name, local_buffer);

    *new_name = local_new_name;
    return true;

}