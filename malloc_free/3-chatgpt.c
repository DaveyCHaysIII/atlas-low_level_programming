int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL; // Return NULL if width or height is 0 or negative
    }

    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    for (int i = 0; i < height; i++) {
        grid[i] = (int *)calloc(width, sizeof(int));
        if (grid[i] == NULL) {
            // Free previously allocated memory before returning NULL
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL; // Return NULL if memory allocation fails
        }
    }

    return grid;
}
