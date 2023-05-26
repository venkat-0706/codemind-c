#include <stdio.h>

void printExcelColumnLabel(int columnNumber) {
    char columnName[50];
    int index = 0;
    
    while (columnNumber > 0) {
        int rem = (columnNumber - 1) % 26; 
        columnName[index++] = 'A' + rem;  
        columnNumber = (columnNumber - 1) / 26;
    }
    
    columnName[index] = NULL; 
    int i, j;
    for (i = 0, j = index - 1; i < j; i++, j--) {
        char temp = columnName[i];
        columnName[i] = columnName[j];
        columnName[j] = temp;
    }
    
    printf("%s
", columnName);
}

int main() {
    int columnNumber;
 
    scanf("%d", &columnNumber);
    
    printExcelColumnLabel(columnNumber);
    
    return 0;
}
