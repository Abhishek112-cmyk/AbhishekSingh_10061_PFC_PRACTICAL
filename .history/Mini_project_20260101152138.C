#include <stdio.h>

// Function to scan and detect danger zones
void detectDangerZones(int rows, int cols, int grid[rows][cols]) {
    int found = 0;

    printf("\nDanger Zone Locations:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                printf("Danger Zone found at position (Row: %d, Column: %d)\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No danger zones detected.\n");
    }
}

int main() {
    int rows, cols;

    // Take input for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int grid[rows][cols];

    // Input elements of the 2D array
    printf("\nEnter the elements of the grid (0 for Safe, 1 for Danger):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Call function to detect danger zones
    detectDangerZones(rows, cols, grid);

    return 0;
}
