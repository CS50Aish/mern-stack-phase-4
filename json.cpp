#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"

int main(){
    cJSON *root, *name, *age, *city;
    char *json_string;

    // Create a JSON object
    root = cJSON_CreateObject();

    name = cJSON_CreateString("John");
    cJSON_AddItemToObject(root, "name", name);

    age = cJSON_CreateNumber(30);
    cJSON_AddItemToObject(root, "age", age);

    city = cJSON_CreateString("New York");
    cJSON_AddItemToObject(root, "city", city);

    // Convert JSON object to a String
    json_string = cJSON_Print(root);

    // Print JSON String to the console
    printf("%s\n", json_string);

    // Free Memory
    free(json_string);
    cJSON_Delete(root);
}