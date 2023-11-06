#include <stdio.h>
#include <stdbool.h>

void kill_cell(int cell_id) {
    printf("Good by World!");
}

bool is_dead(int cell_id) {
    return false;
}

int adjacent_cells(int cell_id) {
    return 4;
}

void repopulate(int cell_id) {
    printf("You have been rebirth");
}

int main(int argc, char *argv[]) {
    int curr_cell = 1;
    int adjacent_cells_count = adjacent_cells(curr_cell);

    if (is_dead(curr_cell) && adjacent_cells_count > 3) {
        repopulate(curr_cell);
    } 
    else if (adjacent_cells_count < 2 || adjacent_cells_count > 3) {
        kill_cell(curr_cell);
    }

    return 0;
}
