#include "grid.hpp"
#include <raylib.h>

namespace Game {

void Grid::draw() {
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            Color color = cells[row][col] ? Color{0, 255, 0, 255} : Color{55, 55, 55, 255};
            DrawRectangle(col * cellSize, row * cellSize, cellSize, cellSize, color);
        }
    }
}

void Grid::set(const int row, const int col, const int value) { cells[row][col] = value; }
const int Grid::get(const int row, const int col) { return cells[row][col]; }
} // namespace Game