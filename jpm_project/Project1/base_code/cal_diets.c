#define _CRT_SECURE_NO_WARNINGS
//because of visual studio
//
//  cal_diets.c
//  Diets for Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"

#define MAX_DIETS 100      			// Maximum number of diets
#define MAX_FOOD_NAME_LEN 50		// Maximum length of the name of food


// list of diets 
static Diet diet_list[MAX_DIETS];
static int diet_list_size = 0;


/*
    description : read the information in "diets.txt"
*/

void loadDiets(const char* DIETFILEPATH) {
    FILE *file = fopen("diets.txt", "r");
    if (file == NULL) {
        printf("There is no file for diets! \n");
        return;
    }

     // ToCode: to read a list of the diets from the given file
    char dietdata[150];
    char* ptr;
    //ptr for strtok


    while (fgets(dietdata, sizeof(dietdata), file) != NULL) {
        if (diet_list_size >= MAX_DIETS){
            printf("diet list is so long!\n"); 
            break;
            
		}
        ptr = strtok(dietdata, " ");
        strcpy(diet_list[diet_list_size].food_name, ptr);
        ptr = strtok(NULL, " ");
        diet_list[diet_list_size].calories_intake = atoi(ptr);
        //atoi for int
        diet_list_size++;
    }
    fclose(file);
}

/*
    description : to enter the selected diet and the total calories intake in the health data
    input parameters : health_data - data object to which the selected diet and its calories are added 
    return value : No
    
    operation : 1. provide the options for the diets to be selected
    			2. enter the selected diet and the total calories intake in the health data
*/

void inputDiet(HealthData* health_data) {
    int choice, i;
    
    // ToCode: to provide the options for the diets to be selected
    printf("The list of diets:\n");
    for (i = 0; i < diet_list_size; i++)
        printf("%d. %s\n", i, diet_list[i].food_name);
    //print diet list 0~n
    printf("%d. Exit\n", diet_list_size);
    printf("Select a diet.(0~)\n");
    scanf("%d", &choice);
    
    
	// ToCode: to enter the diet to be chosen with exit option
    if (choice == diet_list_size)
        return;

    // ToCode: to enter the selected diet in the health data
    health_data->diet[health_data->diet_count] = diet_list[choice];
    health_data->total_calories_intake += diet_list[choice].calories_intake;  // Ä®·Î¸® ÃÑÇÕ ¾÷µ¥ÀÌÆ®
    health_data->diet_count++;

    // ToCode: to enter the total calories intake in the health data
    printf("You selected : %s\n", diet_list[choice].food_name);
    printf("Calorie: %d\n", diet_list[choice].calories_intake);
    printf("Total calorie: %d\n", health_data->total_calories_intake);

}

