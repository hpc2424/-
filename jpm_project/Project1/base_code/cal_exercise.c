#define _CRT_SECURE_NO_WARNINGS
//because of visual studio

//
//  cal_exercise.c
//  Excercise for Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"

#define MAX_EXERCISES 100  			// Maximum number of exercises
#define MAX_EXERCISE_NAME_LEN 50	// Maximum length of the name of exercise


// To declare the structure of the exercises
static Exercise exercise_list[MAX_EXERCISES];
int exercise_list_size = 0;


/*
    description : read the information in "excercises.txt"
*/

void loadExercises(const char* EXERCISEFILEPATH) {
    FILE *file = fopen("exercises.txt", "r");
    if (file == NULL) {
        printf("There is no file for exercises! \n");
        return;
    }
    
    // ToCode: to read a list of the exercises from the given file
    char exercise_data[150];
    char* ptr;
    //ptr for strtok
    
    
    while (fgets(exercise_data, sizeof(exercise_data), file) != NULL) {
    	
        if (exercise_list_size >= MAX_EXERCISES){
            printf("Exercise list is too long!!!!\n");
        	break;
		}

        ptr = strtok(exercise_data, " ");
        if (ptr != NULL)
            strcpy(exercise_list[exercise_list_size].exercise_name, ptr);
  
        ptr = strtok(NULL, " ");
        if (ptr != NULL) 
            exercise_list[exercise_list_size].calories_burned_per_minute = atoi(ptr);
            //used atoi to char->int
        exercise_list_size++;

    }

    fclose(file);
}


/*
    description : to enter the selected exercise and the total calories burned in the health data
    input parameters : health_data - data object to which the selected exercise and its calories are added 
    return value : No
    
    operation : 1. provide the options for the exercises to be selected
    			2. enter the duration of the exercise
    			3. enter the selected exercise and the total calories burned in the health data
*/

void inputExercise(HealthData* health_data) {
    int choice, duration, i;
    
    // ToCode: to provide the options for the exercises to be selected
    printf("The list of exercises: \n");
    for (i = 0; i < exercise_list_size; i++)
        printf("%d. %s\n", i, exercise_list[i].exercise_name);
    //print ex list 0~n

    // ToCode: to enter the exercise to be chosen with exit option
    printf("%d. Exit\n", exercise_list_size);
    printf("Select a exercise.(0~)");
    scanf("%d", &choice);

    if (choice == exercise_list_size) 
        return;
 
    // To enter the duration of the exercise
    printf("Enter the duration of the exercise (in min.): ");
    scanf("%d", &duration);

    // ToCode: to enter the selected exercise and total calcories burned in the health data
    health_data->exercises[health_data->exercise_count] = exercise_list[choice];
    health_data->total_calories_burned += exercise_list[choice].calories_burned_per_minute * duration;
    health_data->exercise_count++;

}
