#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include "complex.h"

struct complex_set {
    int num_points_in_set;
    struct complex_Number *points; // an array of struct complex
};

struct complex_set *alloc_set(struct complex_Number c_arr[], int size) {


    struct complex_set *newset = malloc(sizeof(struct complex_set));

    assert(size > 0);
    if (newset == 0) {
        printf("Might have a problem");
        return NULL;
    }


    struct complex_Number *array = malloc(size * sizeof(struct complex_Number));
    if (array == NULL) {
        printf("Might have a problem");
        free(newset);
        return NULL;
    }

    newset->num_points_in_set = size;
    newset->points = array;
    for (int i = 0; i < size; ++i) {
        array[i] = c_arr[i];
    }

    return newset;
}

void free_set(struct complex_set *set) {
    assert(set != NULL);
    assert(set->points != NULL);


    free(set->points);

    set->points = NULL;
    free(set);

}


int main() {
    struct complex_Number a = {1, 1};
    struct complex_Number b = {2, 2};
    struct complex_Number aplusb = add(a, b);
    printf("A + B = (%g + %gi) \n", aplusb.a, aplusb.b);

    struct complex_Number a1 = {1, 1};
    struct complex_Number b1 = {2, 2};
    struct complex_Number aminusb = subtract(a, b);
    printf("A + B = (%g + %gi) \n", aminusb.a, aminusb.b);

    struct complex_Number a2 = {1, 1};
    struct complex_Number b2 = {2, 2};
    struct complex_Number atimesb = multiply(a, b);
    printf("A + B = (%g + %gi) \n", atimesb.a, atimesb.b);


    struct complex_Number a3 = {1, 1};
    struct complex_Number b4 = {2, 2};
    struct complex_Number adividesbyb = divide(a, b);
    printf("A + B = (%g + %gi) \n", adividesbyb.a, adividesbyb.b);


    int size = 5;
    struct complex_Number array[size];
    for (int i = 0; i < size; ++i) {
        array[i].a = i;
        array[i].b = i;
    }
    for (int j = 0; j < size; ++j) {
        printf("%f, %f\n", array[j].a, array[j].b);
    }

    struct complex_set *set = alloc_set(array, size);
    printf("%d \n", set->num_points_in_set);

    for (int k = 0; k < size; ++k) {
        printf("%f, %f\n", set->points[k].a, set->points[k].b);
    }

    free_set(set);

    return 0;
}