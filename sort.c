#include <stdio.h>


int scores[] = {543,323,32,554,11,3,112};

int compare_scores(const void* score_a, const void* score_b)
 {
        int a = *(int*)score_a;
        int b = *(int*)score_b;
        return b-a;
    }
    
int main(){
    size_t total_size = sizeof(scores);
    size_t element_size = sizeof(scores[0]);
    size_t count = total_size / element_size;
    
    printf("Total size: %zu\n", total_size);
    printf("Element size: %zu\n", element_size);
    printf("Count: %zu\n", count);
    for (int i = 0; i < count; i++){
        printf("%i\n", scores[i]);
    }
    printf("After sorting \n");
    qsort(scores, 7, sizeof(int), compare_scores);
    for (int i = 0; i < count; i++){
        printf("%i\n", scores[i]);
    }
}