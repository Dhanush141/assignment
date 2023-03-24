#include <stdio.h>
#include <string.h>

void ascending_sort(char names[][100], int n) {
    char temp[100];
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

void descending_sort(char names[][100], int n) {
    char temp[100];
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(names[i], names[j]) < 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[100][100];
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter the names: \n");
    for(int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    char order;
    printf("Enter the sorting order (A/D): ");
    scanf(" %c", &order);

    if(order == 'A' || order == 'a') {
        ascending_sort(names, n);
    }
    else if(order == 'D' || order == 'd') {
        descending_sort(names, n);
    }
    else {
        printf("Invalid sorting order!\n");
        return 0;
    }

    printf("Sorted names:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
order:
Enter the number of names: 5
Enter the names:
Banana
Carrot
Radish
Apple
Jack
Enter the sorting order (A/D): A
Sorted names:
Apple
Banana
Carrot
Jack
Radish