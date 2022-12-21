#include<stdio.h>
void insert(int *, int);
void delete(int *, int);
void traverse(int *, int);
// void merge(int[], int[]);

int main(){
    int n, i;
    char operation, raw;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr1[100], arr2[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    int *ptr = arr1;
    scanf("%c", &raw);
    printf("Enter I for insert");
    printf("\nEnter D for delete");
    printf("\nEnter T for traverse");
    printf("\nEnter M for merge\n");
    scanf("%c", &operation);
    printf("%c", operation);
    switch(operation){
        case 'i':
        case 'I':
            insert(ptr, n);
            n++;
            break;
        case 'D':
        case 'd':
            delete(ptr, n);
            break;
        default:
            printf("Invalid operation");
            break;
    }

    traverse(ptr, n);
}


void insert(int *ptr, int n){
    int i, indicator = n;

    // for(i = 0; i < n; i++);
    printf("Enter num to insert");
    scanf("%d", ptr+indicator);
}

void delete(int *ptr, int n){
    int i, num;
    printf("Enter the element to delete: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++){
        if(num == ptr){
            if(i == (n - 1)){
                ptr = 0;
            }
            else{
                for(j = i; j < n-1; j++){
                    ptr + j = ptr + j + 1; 
                }
            }
        }
    }
}



void traverse(int *ptr, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d\t", *ptr);
        ptr++;
    }
}


